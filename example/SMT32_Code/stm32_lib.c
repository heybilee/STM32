#include <stdio.h>
#include <stdint.h>

#define RCC_ADD_BASE 0x40023800
#define RCC_ADD_GPIOA (RCC_ADD_BASE + 0x30) 
#define GPIOA *((volatile uint32_t*)RCC_ADD_GPIOA)
