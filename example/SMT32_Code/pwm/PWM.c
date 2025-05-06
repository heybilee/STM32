#include "rcc.h"
#include "gpio.h"
#include "tim.h"

#define RCC   ((volatile RCC_Typedef *) 0x40023800)
#define GPIOA ((volatile GPIO_Typedef *) 0x40020000) 
#define TIM2  ((volatile TIM2_TypeDef *) 0x40000000)


void delay(int t) {
    while (t--) {}
}

void GPIOA_Config_AF1_TIM2_CH1(void) {
    RCC->AHB1ENR.BITS.GPIOAEN = 1 ; // Enable clock for port A

    // Set PA5 as Alternate Function mode
    GPIOA->GPIOx_MODER.BITS.MODER5 = 0x2;   // AF mode

    // Set PA5 alternate function to AF1 (TIM2_CH1)
    GPIOA->GPIOx_AFRL.BITS.AFRL5 = 0x1;     // AF1 = TIM2_CH1
}

void TIM2_PWM_Init(uint32_t prescaler, uint32_t period, uint32_t pulse) {
    // Enable clock for TIM2
    RCC->APB1ENR.BITS.TIM2EN = 1;

    // Configure TIM2_CR1: Enable the counter and auto-reload preload
    TIM2->CR1.BITS.CEN = 0;    // Disable the counter for configuration
    TIM2->CR1.BITS.ARPE = 1;   // Enable auto-reload preload

    // Configure the prescaler value
    TIM2->PSC.BITS.PSC = prescaler - 1; // Prescaler value

    // Configure the auto-reload value (PWM frequency)
    TIM2->ARR.BITS.ARR_L = period - 1;  // Auto-reload value

    // Configure the Capture/Compare value (PWM duty cycle)
    TIM2->CCR1.BITS.CCR1_L = pulse;  // Duty cycle value

    // Configure PWM mode for TIM2 Channel 1 (OC1)
    TIM2->CCMR1.OUT.OC1M = 0x6;    // PWM mode 1 (clear OC1 when CNT=ARR, set OC1 when CNT=CCR1)
    TIM2->CCER.BITS.CC1E = 1;      // Enable output compare channel 1

    // Enable the counter
    TIM2->CR1.BITS.CEN = 1;        // Enable the counter
}

void TIM2_SetPWM(uint32_t period, uint32_t pulse) {
    // Update the auto-reload and capture/compare values while the counter is running
    TIM2->ARR.BITS.ARR_L = period - 1;
    TIM2->CCR1.BITS.CCR1_L = pulse;
}

int main(void) {
    // Step 1: Configure PA5 for TIM2 CH1 (PWM)
    GPIOA_Config_AF1_TIM2_CH1();

    // Step 2: Configure PWM for TIM2 Channel 1
    uint32_t prescaler = 16;  // Prescaler value (depends on system clock and desired PWM frequency)
    uint32_t period = 1000;   // PWM frequency (1000 = 1kHz)
    uint32_t pulse = 500;     // Duty cycle (50%)

    TIM2_PWM_Init(prescaler, period, pulse);

    // Step 3: Main loop (run continuously)
    while (1) {
        // Change the duty cycle or PWM frequency if needed
        // For example, change the duty cycle
        TIM2_SetPWM(1000, 250);  // 25% duty cycle
        for (volatile int i = 0; i < 1000000; i++);  // Delay for testing

        TIM2_SetPWM(1000, 750);  // 75% duty cycle
        for (volatile int i = 0; i < 1000000; i++);  // Delay for testing
    }
}
