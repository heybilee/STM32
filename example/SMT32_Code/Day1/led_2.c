#include "stm32f401xe.h"
void delay(volatile uint32_t t) {
    while (t--);
}
int main() {
	
	
	RCC->AHB1ENR |= (1 << 0);
	GPIOA->MODER = 0x00000000;
	GPIOA->MODER |= (1 << 10);
	while (1) {
		GPIOA->ODR ^= (1 << 5);
		delay(1000000);
	}
}