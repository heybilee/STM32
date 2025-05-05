#ifndef TIMx_H
#define TIMx_H

#include <stdio.h>
#include <stdint.h>

//TIM1 register struct made by me

typedef struct
{
//CR1  register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  CEN : 1;
        uint32_t  UDIS : 1;
        uint32_t  URS : 1;
        uint32_t  OPM : 1;
        uint32_t  _Reserved0 : 3;
        uint32_t  ARPE : 1;
        uint32_t  CKD : 2;
        uint32_t  _Reserved1 : 22;
    }BITS;
    
}CR1;

//SMCR  register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  _Reserved0 : 32;
    }BITS;
    
}SMCR;


//DIER register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  UIE : 1;
        uint32_t  CC1IE : 1;
        uint32_t  _Reserved0 : 30;
    }BITS;
    
}DIER;


//SR register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  UIF : 1;
        uint32_t  CC1IF : 1;
        uint32_t  _Reserved0 : 7;
        uint32_t  CC1OF : 1;
        uint32_t  _Reserved0 : 22;
    }BITS;
    
}SR;


//EGR register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  UG : 1;
        uint32_t  CC1G : 1;
        uint32_t  _Reserved0 : 30;
    }BITS;
    
}EGR;


typedef union
{
    uint32_t REG;
    struct
    {
        uint32_t CC1S   : 2;  // Capture/Compare 1 Selection
        // Output Compare fields
        uint32_t OC1FE  : 1;  // Output Compare 1 Fast Enable
        uint32_t OC1PE  : 1;  // Output Compare 1 Preload Enable
        uint32_t OC1M   : 3;  // Output Compare 1 Mode
        uint32_t _resvd : 25; 
    } OUTPUT;

    struct
    {
        // Input Capture fields
        uint32_t CC1S   : 2;  // Capture/Compare 1 Selection
        uint32_t IC1PSC : 2;  // Input Capture 1 Prescaler
        uint32_t IC1F   : 4;  // Input Capture 1 Filter
        uint32_t _resvd : 24;
    } INPUT;
}CCMR1;


uint32_t RESERVED0[1];


//CCER register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  CC1E : 1;
        uint32_t  CC1P : 1;
        uint32_t  _Reserved0 : 1;
        uint32_t  CC1NP : 1;
        uint32_t  _Reserved1 : 28;
    }BITS;
    
}CCER;


//CNT register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  CNT : 16;
        uint32_t  _Reserved0 : 16;
    }BITS;
    
}CNT;

//PSC register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  PSC : 16;
        uint32_t  _Reserved0 : 16;
    }BITS;
    
}PSC;


//ARR register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  ARR : 16;
        uint32_t  _Reserved0 : 16;
    }BITS;
    
}ARR;


uint32_t RESERVED1[1];


//CCR1 register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  CCR1 : 16;
        uint32_t  _Reserved0 : 16;
    }BITS;
    
}CCR1;

uint32_t RESERVED2[1];


//OR register
union 
{
    uint32_t  REG;
    struct 
    {
        uint32_t  TI1_RMP : 2;
        uint32_t  _Reserved0 : 30;
    }BITS;
    
}OR;





}TIMx_Typedef;

#endif /* RCC_H */


















