#ifndef RCC_H
#define RCC_H

#include <stdio.h>
#include <stdint.h>

//RCC register struct made by me

typedef struct
{
//RCC_CR register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  HSI_ON : 1;
        uint32_t  HSI_RDY : 1;
        uint32_t  _Reserved0 : 1;
        uint32_t  HSI_TRIM0 : 1;
        uint32_t  HSI_TRIM1 : 1;
        uint32_t  HSI_TRIM2 : 1;
        uint32_t  HSI_TRIM3 : 1;
        uint32_t  HSI_TRIM4 : 1;
        uint32_t  HSICAL0 : 1;
        uint32_t  HSICAL1 : 1;
        uint32_t  HSICAL2 : 1;
        uint32_t  HSICAL3 : 1;
        uint32_t  HSICAL4 : 1;
        uint32_t  HSICAL5 : 1;
        uint32_t  HSICAL6 : 1;
        uint32_t  HSICAL7 : 1;
        uint32_t  HSE_ON : 1;
        uint32_t  HSE_RDY : 1;
        uint32_t  HSE_BYP : 1;
        uint32_t  CSSON : 1;
        uint32_t  _Reserved1 : 4;
        uint32_t  PLL_ON : 1;
        uint32_t  PLL_RDY : 1;
        uint32_t  PLL_I2SON : 1;
        uint32_t  PLL_I2SRDY : 1;
        uint32_t  _Reserved2 : 4;
    }BITS;
    
}CR;

//RCC_PLLCFGR register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  PLLM_0 : 1;
        uint32_t  PLLM_1 : 1;
        uint32_t  PLLM_2 : 1;
        uint32_t  PLLM_3 : 1;
        uint32_t  PLLM_4 : 1;
        uint32_t  PLLM_5 : 1;
        uint32_t  PLLN_0 : 1;
        uint32_t  PLLN_1 : 1;
        uint32_t  PLLN_2 : 1;
        uint32_t  PLLN_3 : 1;
        uint32_t  PLLN_4 : 1;
        uint32_t  PLLN_5 : 1;
        uint32_t  PLLN_6 : 1;
        uint32_t  PLLN_7 : 1;
        uint32_t  PLLN_8 : 1;
        uint32_t  _Reserved0 : 1;
        uint32_t  PLLP_0 : 1;
        uint32_t  PLLP_1 : 1;
        uint32_t  _Reserved1 : 4;
        uint32_t  PLLSRC : 1;
        uint32_t  _Reserved2 : 1;
        uint32_t  PLLQ_0 : 1;
        uint32_t  PLLQ_1 : 1;
        uint32_t  PLLQ_2 : 1;
        uint32_t  PLLQ_3 : 1;
        uint32_t  _Reserved3 : 4;

    }BITS;
    
}PLLCFGR;

//RCC_CFGR register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  SW_0 : 1;
        uint32_t  SW_1 : 1;
        uint32_t  SWS_0 : 1;
        uint32_t  SWS_1 : 1;
        uint32_t  HPRE_0 : 1;
        uint32_t  HPRE_1 : 1;
        uint32_t  HPRE_2 : 1;
        uint32_t  HPRE_3 : 1;
        uint32_t  _Reserved0 : 2;
        uint32_t  PPRE1_0 : 1;
        uint32_t  PPRE1_1 : 1;
        uint32_t  PPRE1_2 : 1;
        uint32_t  PPRE2_0 : 1;
        uint32_t  PPRE2_1 : 1;
        uint32_t  PPRE2_2 : 1;
        uint32_t  RTCPRE_0 : 1;
        uint32_t  RTCPRE_1 : 1;
        uint32_t  RTCPRE_2 : 1;
        uint32_t  RTCPRE_3 : 1;
        uint32_t  RTCPRE_4 : 1;
        uint32_t  MCO1_0 : 1;
        uint32_t  MCO1_1 : 1;
        uint32_t  I2SSRC : 1;
        uint32_t  MCO1PRE_0 : 1;
        uint32_t  MCO1PRE_1 : 1;
        uint32_t  MCO1PRE_2 : 1;
        uint32_t  MCO2PRE_0 : 1;
        uint32_t  MCO2PRE_1 : 1;
        uint32_t  MCO2PRE_2 : 1;
        uint32_t  MCO2_0 : 1;
        uint32_t  MCO2_1 : 1;

    }BITS;
    
}CFGR;

//RCC_CIR register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  LSIRDYF : 1;
        uint32_t  LSERDYF : 1;
        uint32_t  HSIRDYF : 1;
        uint32_t  HSERDYF : 1;
        uint32_t  PLLRDYF : 1;
        uint32_t  PLLI2SRDYF : 1;
        uint32_t  _Reserved0 : 1;
        uint32_t  CSSF : 1;
        uint32_t  LSIRDYIE : 1;
        uint32_t  LSERDYIE : 1;
        uint32_t  HSIRDYIE : 1;
        uint32_t  HSERDYIE : 1;
        uint32_t  PLLRDYIE : 1;
        uint32_t  PLLI2SRDYIE : 1;
        uint32_t  _Reserved1 : 2;
        uint32_t  LSIRDYC : 1;
        uint32_t  LSERDYC : 1;
        uint32_t  HSIRDYC : 1;
        uint32_t  HSERDYC : 1;
        uint32_t  PLLRDYC : 1;
        uint32_t  PLLI2SRDYC : 1;
        uint32_t  _Reserved2 : 1;
        uint32_t  CSSC : 1;
        uint32_t  _Reserved3 : 8;

    }BITS;
    
}CIR;

//RCC_AHB1RSTR resigter
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  GPIOARST : 1;
        uint32_t  GPIOBRST : 1;
        uint32_t  GPIOCRST : 1;
        uint32_t  GPIODRST : 1;
        uint32_t  GPIOERST : 1;
        uint32_t  _Reserved0 : 2;
        uint32_t  GPIOHRST : 1;
        uint32_t  _Reserved1 : 4;
        uint32_t  CRCRST : 1;
        uint32_t  _Reserved2 : 8;
        uint32_t  DMA1RST : 1;
        uint32_t  DMA2RST : 1;
        uint32_t  _Reserved3 : 9;
    }BITS;
}AHB1RSTR;

//RCC_AHB2RSTR resigter
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  _Reserved0 : 7;
        uint32_t  OTGFSRST : 1;
        uint32_t  _Reserved1 : 24;
    }BITS;
}AHB2RSTR;

// 0x18, 0x1C
uint32_t RESERVED0[2]; 

//RCC_APB1RSTR resigter
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  TIM2RST : 1;
        uint32_t  TIM3RST : 1;
        uint32_t  TIM4RST : 1;
        uint32_t  TIM5RST : 1;
        uint32_t  _Reserved0 : 7;
        uint32_t  WWDGRST: 1;
        uint32_t  _Reserved1 : 2;
        uint32_t  SPI2RST : 1;
        uint32_t  SPI3RST : 1;
        uint32_t  _Reserved2 : 1;
        uint32_t  USART2RST : 1;
        uint32_t  _Reserved3 : 3;
        uint32_t  I2C1RST : 1;
        uint32_t  I2C2RST : 1;
        uint32_t  I2C3RST : 1;
        uint32_t  _Reserved4 : 4;
        uint32_t  PWRRST : 1;
        uint32_t  _Reserved5 : 3;
    }BITS;
}APB1RSTR;

//RCC_APB2RSTR resigter
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  TIM1RST : 1;
        uint32_t  _Reserved0 : 3;
        uint32_t  USART1RST : 1;
        uint32_t  USART6RST : 1;
        uint32_t  _Reserved1 : 2;
        uint32_t  ADC1RST: 1;
        uint32_t  _Reserved2 : 2;
        uint32_t  SDIORST : 1;
        uint32_t  SPI1RST : 1;
        uint32_t  SP45RST : 1;
        uint32_t  SYSCFGRST : 1;
        uint32_t  _Reserved3 : 1;
        uint32_t  TIM9RST : 1;
        uint32_t  TIM10RST : 1;
        uint32_t  TIM11RST : 1;
        uint32_t  _Reserved4 : 13;
    }BITS;
}APB2RSTR;

// 0x28, 0x2C
uint32_t RESERVED1[2]; 

//RCC_AHB1ENR resigter
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  GPIOAEN : 1;
        uint32_t  GPIOBEN : 1;
        uint32_t  GPIOCEN : 1;
        uint32_t  GPIODEN : 1;
        uint32_t  GPIOEEN : 1;
        uint32_t  _Reserved0 : 2;
        uint32_t  GPIOHEN : 1;
        uint32_t  _Reserved1 : 4;
        uint32_t  CRCEN: 1;
        uint32_t  _Reserved2 : 8;
        uint32_t  DMA1EN : 1;
        uint32_t  DMA2EN : 1;
        uint32_t  _Reserved3 : 9;
    }BITS;
}AHB1ENR;

//RCC_AHB2ENR resigter
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  _Reserved0 : 7;
        uint32_t  OTGFSEN : 1;
        uint32_t  _Reserved1 : 24;
    }BITS;
}AHB2ENR;

//0x38, 0x3C
uint32_t RESERVED2[2]; 

//RCC_APB1ENR resigter
union 
{
    uint32_t  REG;
    struct 
    {   
        uint32_t  TIM2EN : 1;
        uint32_t  TIM3EN : 1;
        uint32_t  TIM4EN : 1;
        uint32_t  TIM5EN : 1;
        uint32_t  _Reserved0 : 7;
        uint32_t  WWDGEN : 1;
        uint32_t  _Reserved1 : 2;
        uint32_t  SPI2EN : 1;
        uint32_t  SPI3EN : 1;
        uint32_t  _Reserved2 : 1;
        uint32_t  USART2EN : 1;
        uint32_t  _Reserved3 : 3;
        uint32_t  I2C1EN : 1;
        uint32_t  I2C2EN : 1;
        uint32_t  I2C3EN : 1;
        uint32_t  _Reserved4 : 4;
        uint32_t  PWREN : 1;
        uint32_t  _Reserved5 : 3;
    }BITS;
}APB1ENR;

//RCC_APB2ENR resigter
union 
{
    uint32_t  REG;
    struct 
    {   
        uint32_t  TIM1EN : 1;
        uint32_t  _Reserved0 : 3;
        uint32_t  USART1EN : 1;
        uint32_t  USART6EN : 1;
        uint32_t  _Reserved1 : 2;
        uint32_t  ADC1EN : 1;
        uint32_t  _Reserved2 : 2;
        uint32_t  SDIOEN : 1;
        uint32_t  SPI1EN : 1;
        uint32_t  SPI4EN : 1;
        uint32_t  SYSCFGEN : 1;
        uint32_t  _Reserved3 : 1;
        uint32_t  TIM9EN : 1;
        uint32_t  TIM10EN : 1;
        uint32_t  TIM11EN : 1;
        uint32_t  _Reserved4 : 13;
    }BITS;
}APB2ENR;

//0x48, 0x4C
uint32_t RESERVED3[2]; 

//RCC_AHB1LPENR resigter
union 
{
    uint32_t  REG;
    struct 
    {   
        uint32_t  GPIOALPEN : 1;
        uint32_t  GPIOBLPEN : 1;
        uint32_t  GPIOCLPEN : 1;
        uint32_t  GPIODLPEN : 1;
        uint32_t  GPIOELPEN : 1;
        uint32_t  _Reserved0 : 2;
        uint32_t  GPIOHLPEN : 1;
        uint32_t  _Reserved1 : 4;
        uint32_t  CRCLPEN : 1;
        uint32_t  _Reserved2 : 2;
        uint32_t  FLITFLPEN : 1;
        uint32_t  SRAM1LPEN : 1;
        uint32_t  _Reserved3 : 4;
        uint32_t  DMA1LPEN : 1;
        uint32_t  DMA2LPEN : 1;
        uint32_t  _Reserved4 : 9;
    }BITS;
}AHB1LPENR;


//RCC_AHB2LPENR resigter
union 
{
    uint32_t  REG;
    struct 
    {   
        uint32_t  _Reserved0 : 7;
        uint32_t  OTGFSLPEN : 1;
        uint32_t  _Reserved1 : 24;
    }BITS;
}AHB2LPENR;

//0x58, 0x5C
uint32_t RESERVED4[2]; 

//RCC_APB1LPENR register
union 
{
    uint32_t  REG;
    struct 
    {   
        uint32_t  TIM2LPEN : 1;
        uint32_t  TIM3LPEN : 1;
        uint32_t  TIM4LPEN : 1;
        uint32_t  TIM5LPEN : 1;
        uint32_t  _Reserved0 : 7;
        uint32_t  WWDGLPEN : 1;
        uint32_t  _Reserved1 : 2;
        uint32_t  SPI2LPEN : 1;
        uint32_t  SPI3LPEN : 1;
        uint32_t  _Reserved2 : 1;
        uint32_t  USART2LPEN : 1;
        uint32_t  _Reserved3 : 3;
        uint32_t  I2C1LPEN : 1;
        uint32_t  I2C2LPEN : 1;
        uint32_t  I2C3LPEN : 1;
        uint32_t  _Reserved4 : 4;
        uint32_t  PWRLPEN : 1;
        uint32_t  _Reserved5 : 3;
    }BITS;
}APB1LPENR;

//RCC_APB2LPENR register
union 
{
    uint32_t  REG;
    struct 
    {   
        uint32_t  TIM1LPEN : 1;
        uint32_t  _Reserved0 : 3;
        uint32_t  USART1LPEN : 1;
        uint32_t  USART6LPEN : 1;
        uint32_t  _Reserved1 : 2;
        uint32_t  ADC1LPEN : 1;
        uint32_t  _Reserved2 : 2;
        uint32_t  SDIOLPEN : 1;
        uint32_t  SPI1LPEN : 1;
        uint32_t  SPI4LPEN : 1;
        uint32_t  SYSCFGLPEN : 1;
        uint32_t  _Reserved3 : 1;
        uint32_t  TIM9LPEN : 1;
        uint32_t  TIM10LPEN : 1;
        uint32_t  TIM11LPEN : 1;
        uint32_t  _Reserved4 : 13;
    }BITS;
}APB2LPENR;

//0x78, 0x7C
uint32_t RESERVED5[2]; 

//RCC_SSCGR register
union 
{
    uint32_t  REG;
    struct 
    {   
        uint32_t  MODPER : 13;
        uint32_t  INCSTEP : 15;
        uint32_t  _Reserved0 : 2;
        uint32_t  SPREADSEL : 1;
        uint32_t  SSCGEN : 1;
    }BITS;
}SSCGR;

//RCC_PLLI2SCFGR register
union 
{
    uint32_t  REG;
    struct 
    {   
        uint32_t  _Reserved0 : 6;
        uint32_t  PLLI2SNx : 9;
        uint32_t  _Reserved1 : 13;
        uint32_t  PLLI2SRx : 3;
        uint32_t  _Reserved2 : 1;
    }BITS;
}PLLI2SCFGR;

//0x88
uint32_t RESERVED6[1]; 

//RCC_DCKCFGR register
union 
{
    uint32_t  REG;
    struct 
    {   
        uint32_t  _Reserved0 : 24;
        uint32_t  TIMPRE : 1;
        uint32_t  _Reserved1 : 7;
    }BITS;
}DCKCFGR;
}RCC_Typedef;

#endif /* RCC_H */


// #define RCC ((volatile RCC_Typedef *) 0x40023800)


// int main() {
//     // Truy cập và bật bit HSI_ON (bit 0)
//     RCC->CR.BITS.HSI_ON = 1;

//     // Kiểm tra trạng thái của HSI_ON
//     if (RCC->CR.BITS.HSI_ON) {
//         printf("HSI is ON!\n");
//     } else {
//         printf("HSI is OFF!\n");
//     }

//     return 0;
// }

















