#ifndef TIM2_H
#define TIM2_H

#include <stdint.h>

typedef struct
{
    // 0x00 TIM2_CR1: Control Register 1
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t CEN : 1;         // Counter enable
            uint32_t UDIS : 1;        // Update disable
            uint32_t URS : 1;         // Update request source
            uint32_t OPM : 1;         // One pulse mode
            uint32_t DIR : 1;         // Direction
            uint32_t CMS : 2;         // Center-aligned mode selection
            uint32_t ARPE : 1;        // Auto-reload preload enable
            uint32_t CKD : 2;         // Clock division
            uint32_t _Reserved0 : 20; // Reserved
        } BITS;
    } CR1;

    // 0x04 TIM2_CR2: Control Register 2
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t _Reserved0 : 3;  // Reserved
            uint32_t CCDS : 1;        // Capture/Compare control update selection
            uint32_t MMS : 3;         // Master Mode Selection
            uint32_t TI1S : 1;        // TI1 selection
            uint32_t _Reserved1 : 22; // Reserved
        } BITS;
    } CR2;

    // 0x08 TIM2_SMCR: Slave Mode Control Register
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t SMS : 3;         // Slave mode selection
            uint32_t _Reserved0 : 1;  // Reserved
            uint32_t TS : 3;          // Trigger selection
            uint32_t MSM : 1;         // Master/slave mode
            uint32_t ETF : 4;         // External trigger filter
            uint32_t ETPS : 2;        // Slave mode selection
            uint32_t ECE : 1;         // External clock enable
            uint32_t ETP : 1;         // External trigger polarity
            uint32_t _Reserved1 : 16; // Reserved
        } BITS;
    } SMCR;

    // 0x0C TIM2_DIER: DMA/Interrupt Enable Register
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t UIE : 1;       // Update Interrupt Enable
            uint32_t CC1IE : 1;     // Capture/Compare 1 Interrupt Enable
            uint32_t CC2IE : 1;     // Capture/Compare 2 Interrupt Enable
            uint32_t CC3IE : 1;     // Capture/Compare 3 Interrupt Enable
            uint32_t CC4IE : 1;     // Capture/Compare 4 Interrupt Enable
            uint32_t Reserved2 : 1; // Reserved
            uint32_t TIE : 1;       // Trigger Interrupt Enable
            uint32_t Reserved1 : 1; // Reserved
            uint32_t UDE : 1;       // Update DMA Request Enable
            uint32_t CC1DE : 1;     // Capture/Compare 1 DMA Request Enable
            uint32_t CC2DE : 1;     // Capture/Compare 2 DMA Request Enable
            uint32_t CC3DE : 1;     // Capture/Compare 3 DMA Request Enable
            uint32_t CC4DE : 1;     // Capture/Compare 4 DMA Request Enable
            uint32_t COMDE : 1;     // COM DMA Request Enable
            uint32_t TDE : 1;       // Trigger DMA Request Enable
            uint32_t Reserved : 17; // Reserved
        } BITS;
    } DIER;

    // 0x10 TIM2_SR: Status Register
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t UIF : 1;        // Update Interrupt Flag
            uint32_t CC1IF : 1;      // Capture/Compare 1 Interrupt Flag
            uint32_t CC2IF : 1;      // Capture/Compare 2 Interrupt Flag
            uint32_t CC3IF : 1;      // Capture/Compare 3 Interrupt Flag
            uint32_t CC4IF : 1;      // Capture/Compare 4 Interrupt Flag
            uint32_t Reserved : 1;   // Reserved
            uint32_t TIF : 1;        // Trigger Interrupt Flag
            uint32_t Reserved1 : 2;  // Reserved
            uint32_t CC1OF : 1;      // Capture/Compare 1 Overflow Flag
            uint32_t CC2OF : 1;      // Capture/Compare 2 Overflow Flag
            uint32_t CC3OF : 1;      // Capture/Compare 3 Overflow Flag
            uint32_t CC4OF : 1;      // Capture/Compare 4 Overflow Flag
            uint32_t Reserved2 : 19; // Reserved
        } BITS;
    } SR;

    // 0x14 TIM2_EGR: Event Generation Register
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t UG : 1; // Update generation
            uint32_t CC1G : 1;
            uint32_t CC2G : 1;
            uint32_t CC3G : 1;
            uint32_t CC4G : 1; // Capture/compare 1 generation
            uint32_t _Reserved0 : 1;
            uint32_t TG : 1;
            uint32_t _Reserved1 : 25; // Reserved
        } BITS;
    } EGR;

    union
    {
        uint32_t REG;
        struct
        {

            uint32_t CC1S : 2;       // Capture/Compare 1 Selection (00: Output Compare, 01: Input Capture)
            uint32_t OC1FE : 1;      // Output Compare 1 Fast Enable
            uint32_t OC1PE : 1;      // Output Compare 1 Preload Enable
            uint32_t OC1M : 3;       // Output Compare 1 Mode [2:0]
            uint32_t OC1CE : 1;      // Output Compare 1 Clear Enable
            uint32_t CC2S : 2;       // Capture/Compare 2 Selection (00: Output Compare, 01: Input Capture)
            uint32_t OC2FE : 1;      // Output Compare 2 Fast Enable
            uint32_t OC2PE : 1;      // Output Compare 2 Preload Enable
            uint32_t OC2M : 3;       // Output Compare 2 Mode [2:0]
            uint32_t OC2CE : 1;      // Output Compare 2 Clear Enable
            uint32_t Reserved2 : 16; // Reserved
        } OUT;

        struct
        {
            uint32_t CC1S : 2;       // Capture/Compare 1 Selection (00: Output Compare, 01: Input Capture)   // Input Capture 1 Filter [3:0]
            uint32_t IC1PSC : 2;     // Input Capture 1 Prescaler [1:0]
            uint32_t IC1F : 4;       // Input Capture 2 Filter [3:0]
            uint32_t CC2S : 2;       // Capture/Compare 2 Selection (00: Output Compare, 01: Input Capture)
            uint32_t IC2PSC : 2;     // Input Capture 2 Prescaler [1:0]
            uint32_t IC2F : 4;       // Input Capture 2 Filter [3:0]
            uint32_t Reserved2 : 16; // Reserved

        } IN;

    } CCMR1;

    union
    {
        uint32_t REG;
        struct
        {
            uint32_t CC3S : 2;      // Capture/Compare 3 Selection (00: Output Compare, 01: Input Capture)
            uint32_t OC3FE : 1;     // Output Compare 3 Fast Enable
            uint32_t OC3PE : 1;     // Output Compare 3 Preload Enable
            uint32_t OC3M : 3;      // Output Compare 3 Mode [2:0]
            uint32_t OC3CE : 1;     // Output Compare 3 Clear Enable
            uint32_t CC4S : 2;      // Capture/Compare 4 Selection (00: Output Compare, 01: Input Capture)
            uint32_t OC4FE : 1;     // Output Compare 4 Fast Enable
            uint32_t OC4PE : 1;     // Output Compare 4 Preload Enable
            uint32_t OC4M : 3;      // Output Compare 4 Mode [2:0]
            uint32_t OC4CE : 1;     // Output Compare 4 Clear Enable
            uint32_t Reserved : 16; // Reserved
        } OUT;

        struct
        {
            uint32_t CC3S : 2;      // Capture/Compare 3 Selection (00: Output Compare, 01: Input Capture)
            uint32_t IC3PSC : 2;    // Input Capture 3 Prescaler [1:0]
            uint32_t IC3F : 4;      // Input Capture 3 Filter [3:0]
            uint32_t CC4S : 2;      // Capture/Compare 4 Selection (00: Output Compare, 01: Input Capture)
            uint32_t IC4PSC : 2;    // Input Capture 4 Prescaler [1:0]
            uint32_t IC4F : 4;      // Input Capture 4 Filter [3:0]
            uint32_t Reserved : 16; // Reserved
        } IN;

    } CCMR2;

    union
    {
        uint32_t REG;
        struct
        {
            uint32_t CC1E : 1;      // Capture/Compare 1 Output Enable
            uint32_t CC1P : 1;      // Capture/Compare 1 Polarity
            uint32_t Reserved1 : 1; // Reserved
            uint32_t CC1NP : 1;     // Capture/Compare 1 Complementary Output Polarity

            uint32_t CC2E : 1;      // Capture/Compare 2 Output Enable
            uint32_t CC2P : 1;      // Capture/Compare 2 Polarity
            uint32_t Reserved2 : 1; // Reserved
            uint32_t CC2NP : 1;     // Capture/Compare 2 Complementary Output Polarity

            uint32_t CC3E : 1;      // Capture/Compare 3 Output Enable
            uint32_t CC3P : 1;      // Capture/Compare 3 Polarity
            uint32_t Reserved3 : 1; // Reserved
            uint32_t CC3NP : 1;     // Capture/Compare 3 Complementary Output Polarity

            uint32_t CC4E : 1;      // Capture/Compare 4 Output Enable
            uint32_t CC4P : 1;      // Capture/Compare 4 Polarity
            uint32_t Reserved4 : 1; // Reserved
            uint32_t CC4NP : 1;     // Capture/Compare 4 Complementary Output Polarity

            uint32_t Reserved5 : 16; // Reserved (padding to 32 bits)
        } BITS;
    } CCER;

    // 0x24 TIM2_CNT: Counter Register
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t CNT_L : 16;  // Counter value lower 16 bits
            uint32_t CNT_H : 16;  // Counter value upper 16 bits (only for TIM2 and TIM5)
        } BITS;
    } CNT;

    // 0x28 TIM2_PSC: Prescaler Register
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t PSC : 16;        // Prescaler value
            uint32_t _Reserved0 : 16; // Reserved
        } BITS;
    } PSC;

    // 0x2C TIM2_ARR: Auto-Reload Register
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t ARR_L : 16;        // Auto-reload value
            uint32_t ARR_H : 16; 
        } BITS;
    } ARR;

    uint32_t RESERVED0[1]; 
    // 0x34 TIM2_CCR1: Capture/Compare Register 1
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t CCR1_L : 16;       // Capture/Compare value for channel 1
            uint32_t CCR1_H : 16; // Reserved
        } BITS;
    } CCR1;

    // 0x38 TIM2_CCR2: Capture/Compare Register 2
union
{
    uint32_t REG;
    struct
    {
        uint32_t CCR2_L : 16;  // Capture/Compare value for channel 2
        uint32_t CCR2_H : 16;  // Reserved
    } BITS;
} CCR2;
// 0x3C TIM2_CCR3: Capture/Compare Register 3
union
{
    uint32_t REG;
    struct
    {
        uint32_t CCR3_L : 16;  // Capture/Compare value for channel 3
        uint32_t CCR3_H : 16;  // Reserved
    } BITS;
} CCR3;

// 0x40 TIM2_CCR4: Capture/Compare Register 4
union
{
    uint32_t REG;
    struct
    {
        uint32_t CCR4_L : 16;  // Capture/Compare value for channel 4
        uint32_t CCR4_H : 16;  // Reserved
    } BITS;
} CCR4;
uint32_t RESERVED1[1];

// 0x48 TIM2_DCR: DMA Control Register
union
{
    uint32_t REG;
    struct
    {
        uint32_t DBA : 5;       // DMA Base Address [4:0]
        uint32_t Reserved1 : 3; // Reserved
        uint32_t DBL : 5;       // DMA Burst Length [4:0]
        uint32_t Reserved2 : 19;// Reserved
    } BITS;
} DCR;
// 0x4C TIM2_DMAR: DMA Address for Full Transfer
union
{
    uint32_t REG;
    struct
    {
        uint32_t DMAB : 16;       // DMA register for burst accesses
        uint32_t Reserved : 16;   // Reserved
    } BITS;
} DMAR;

// 0x50 TIM2_OR: Option Register
union
{
    uint32_t REG;
    struct
    {
        uint32_t Reserved0 : 10;   // Reserved
        uint32_t ITR1_RMP : 2;    // Internal Trigger 1 Remap
        uint32_t Reserved : 20;   // Reserved
    } TIM2_OR;

    struct
    {
        uint32_t Reserved0 : 6;   // Reserved
        uint32_t IT4_RMP : 2;    // Internal Trigger 1 Remap
        uint32_t Reserved : 24;   // Reserved
    } TIM5_OR;
} OR;


} TIM2_TypeDef;

#endif // TIM2_H
