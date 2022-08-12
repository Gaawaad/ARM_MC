/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  intCtr.c
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_types.h"
#include "intCtr.h"
/******************************************************************************
 * \Syntax          : void intCtr_init(void)
 * \Description     : control the interrupts
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value:   : No return
 *******************************************************************************/

void intCtr_init(void)
{
    intConfig_APINT_init();
    intConfig_PRIn_init();
    intConfig_SYSPRIn_init();
}

void IntEnable(IntCtr_type Int_Id)
{
    if (Int_Id < 32 && Int_Id >= 0)
    {
        EN0_Reg |= (1 << Int_Id);
    }
    else if (Int_Id >= 32 && Int_Id <= 63)
    {
        EN1_Reg |= (1 << (Int_Id - 32));
    }
    else if (Int_Id >= 64 && Int_Id <= 95)
    {
        EN2_Reg |= (1 << (Int_Id - 64));
    }
    else if (Int_Id >= 96 && Int_Id <= 127)
    {
        EN3_Reg |= (1 << (Int_Id - 96));
    }
    else if (Int_Id >= 128 && Int_Id <= 138)
    {
        EN4_Reg |= (1 << (Int_Id - 128));
    }
}

void IntDisable(IntCtr_type Int_Id)
{
    if (Int_Id < 32 && Int_Id >= 0)
    {
        DIS0_Reg = (1 << Int_Id);
    }
    else if (Int_Id >= 32 && Int_Id <= 63)
    {
        DIS1_Reg = (1 << (Int_Id - 32));
    }
    else if (Int_Id >= 64 && Int_Id <= 95)
    {
        DIS2_Reg = (1 << (Int_Id - 64));
    }
    else if (Int_Id >= 96 && Int_Id <= 127)
    {
        DIS3_Reg = (1 << (Int_Id - 96));
    }
    else if (Int_Id >= 128 && Int_Id <= 138)
    {
        DIS4_Reg = (1 << (Int_Id - 128));
    }
}

/**********************************************************************************************************************
 *  END OF FILE: intCtr.c
 *********************************************************************************************************************/
