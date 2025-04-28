//#include "stm32f401xe.h"
#include "rcc.h"
#include "gpio.h"

#define RCC ((volatile RCC_Typedef *) 0x40023800)
	
#define GPIOA ((volatile GPIO_Typedef *) 0x40020000) 
	

const uint8_t segment[] = {
    0b01111110, // 0 
    0b00110000, // 1
    0b01101101, // 2 
    0b01111001, // 3 
    0b00110011, // 4 
    0b01011011, // 5 
    0b01011111, // 6 
    0b01110000, // 7 
    0b01111111, // 8 
    0b01111011  // 9 
};

void delay(int t) {
	
	while(t--) {}
}

int main(){
	
	// set clock port A
	RCC->AHB1ENR.REG = 0x00000000;
	RCC->AHB1ENR.BITS.GPIOAEN = 1;
	// set ouput cho port A
	GPIOA->GPIOx_MODER.REG = 0xA8000000;
	GPIOA->GPIOx_MODER.BITS.MODER0 = 0x01; 
	GPIOA->GPIOx_MODER.BITS.MODER1 = 0x01; 
	GPIOA->GPIOx_MODER.BITS.MODER2 = 0x01; 
	GPIOA->GPIOx_MODER.BITS.MODER3 = 0x01; 
	GPIOA->GPIOx_MODER.BITS.MODER4 = 0x01; 
	GPIOA->GPIOx_MODER.BITS.MODER5 = 0x01;
	GPIOA->GPIOx_MODER.BITS.MODER6 = 0x01; 	
	
	while(1) {
		for (int i = 0 ;i < 10 ;i++) {
			GPIOA->GPIOx_ODR.REG = segment[i]; 
			delay(1000000);	
		}
		//GPIOA->ODR = 0b01001111;
	}
}