//*****************************************************************************
//
// ITM
// Instance finder. (1 instance(s) available)
//
//*****************************************************************************
#define AM_REG_ITM_NUM_MODULES                       1
#define AM_REG_ITMn(n) \
    (REG_ITM_BASEADDR + 0x00000000 * n)

//*****************************************************************************
//
// CMSIS-style defines.
//
//*****************************************************************************
#define ITM_LAR_KEYVAL      0xC5ACCE55
