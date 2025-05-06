#ifndef I2C_H
#define I2C_H

#include <stdio.h>
#include <stdint.h>

typedef struct
{
    // CR1 resigter
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t PE : 1;
            uint32_t SMBUS : 1;
            uint32_t _Reserved0 : 1;
            uint32_t SMBTYPE : 1;
            uint32_t ENARP : 1;
            uint32_t ENPEC : 1;
            uint32_t ENGC : 1;
            uint32_t NOSTRETCH : 1;
            uint32_t START : 1;
            uint32_t STOP : 1;
            uint32_t ACK : 1;
            uint32_t POS : 1;
            uint32_t PEC : 1;
            uint32_t ALERT : 1;
            uint32_t _Reserved1 : 1;
            uint32_t SWRST : 1;
            uint32_t _Reserved2 : 16;
        } BITS;
    } CR1;

    // CR2 resigter
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t FREQ : 6;
            uint32_t _Reserved0 : 2;
            uint32_t ITERREN : 1;
            uint32_t ITEVTEN : 1;
            uint32_t ITBUFEN : 1;
            uint32_t DMAEN : 1;
            uint32_t LAST : 1;
            uint32_t _Reserved1 : 19;
        } BITS;
    } CR2;

    // OAR1 resigter
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t ADD0 : 1;
            uint32_t ADD1 : 7;
            uint32_t ADD : 2;
            uint32_t _Reserved0 : 5;
            uint32_t ADDMODE : 1;
            uint32_t _Reserved1 : 16;
        } BITS;
    } OAR1;

    // OAR2 resigter
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t ENDUAL : 1;
            uint32_t ADD2 : 7;
            uint32_t _Reserved1 : 24;
        } BITS;
    } OAR2;

    // DR resigter
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t DR : 8;
            uint32_t _Reserved1 : 24;
        } BITS;
    } DR;

    // SR1 resigter
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t SB : 1;
            uint32_t ADDR : 1;
            uint32_t BTF : 1;
            uint32_t ADD10 : 1;
            uint32_t STOPF : 1;
            uint32_t _Reserved0 : 1;
            uint32_t RxNE : 1;
            uint32_t TxE : 1;
            uint32_t BERR : 1;
            uint32_t ARLO : 1;
            uint32_t AF : 1;
            uint32_t OVR : 1;
            uint32_t PECERR : 1;
            uint32_t _Reserved1 : 1;
            uint32_t TIMEOUT : 1;
            uint32_t SMBALERT : 1;
            uint32_t _Reserved2 : 16;

        } BITS;
    } SR1;

    // SR2 resigter
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t MSL : 1;
            uint32_t BUSY : 1;
            uint32_t TRA : 1;
            uint32_t _Reserved0 : 1;
            uint32_t GENCALL : 1;
            uint32_t SMBDEFAUL : 1;
            uint32_t SMBHOST : 1;
            uint32_t DUALF : 1;
            uint32_t PEC : 8;
            uint32_t _Reserved1 : 16;
        } BITS;
    } SR2;

    // CCR resigter
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t CCR : 12;
            uint32_t _Reserved0 : 2;
            uint32_t DUTY : 1;
            uint32_t FS : 1;
            uint32_t _Reserved1 : 16;
        } BITS;
    } CCR;

    // TRISE resigter
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t TRISE : 6;
            uint32_t _Reserved0 : 26;
        } BITS;
    } TRISE;

    // FLTR resigter
    union
    {
        uint32_t REG;
        struct
        {
            uint32_t DNF : 4;
            uint32_t ANOFF : 1;
            uint32_t _Reserved0 : 27;
        } BITS;
    } FLTR;

} I2C_Typedef;

#endif /* I2C_H */
