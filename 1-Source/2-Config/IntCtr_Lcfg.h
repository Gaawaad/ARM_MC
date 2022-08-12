/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  intCtr_Lcfg.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/
#ifndef INTCTR_LCFG_H
#define INTCTR_LCFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Mc_Hw_Reg.h"
#include "IntCtr_Cfg_types.h"
/**********************************************************************************************************************
 *  GLOBAL MACROS
 *********************************************************************************************************************/

#define _INT_SET_GROUP_AND_SGROUB_NUMBERS X_X_Y
/*********
 * Description  : Choose the number of Groups and sub-groubs.
 * Options :
   Groups 0:7 , Sub-groups 0   =    X_X_X
   Groups 0:3 , Sub-groups 0:1 =    X_X_Y
   Groups 0:1 , Sub-groups 0:3 =    X_Y_Y
   Groups 0   , Sub-groups 0:7 =    Y_Y_Y
   Default (Other Option):
        Groubs 0   , Sub-groubs 0:7
 */
#define _INT0_GROUP_PRI 3
#define _INT0_SUB_G_PRI 1
#define _INT1_GROUP_PRI 0
#define _INT1_SUB_G_PRI 0
#define _INT2_GROUP_PRI 0
#define _INT2_SUB_G_PRI 0
#define _INT3_GROUP_PRI 0
#define _INT3_SUB_G_PRI 0
#define _INT4_GROUP_PRI 0
#define _INT4_SUB_G_PRI 0
#define _INT5_GROUP_PRI 1
#define _INT5_SUB_G_PRI 3
#define _INT6_GROUP_PRI 0
#define _INT6_SUB_G_PRI 0
#define _INT7_GROUP_PRI 0
#define _INT7_SUB_G_PRI 0
#define _INT8_GROUP_PRI 2
#define _INT8_SUB_G_PRI 1
#define _INT9_GROUP_PRI 0
#define _INT9_SUB_G_PRI 0
#define _INT10_GROUP_PRI 0
#define _INT10_SUB_G_PRI 0
#define _INT11_GROUP_PRI 0
#define _INT11_SUB_G_PRI 0
#define _INT12_GROUP_PRI 0
#define _INT12_SUB_G_PRI 0
#define _INT13_GROUP_PRI 0
#define _INT13_SUB_G_PRI 0
#define _INT14_GROUP_PRI 0
#define _INT14_SUB_G_PRI 0
#define _INT15_GROUP_PRI 0
#define _INT15_SUB_G_PRI 0
#define _INT16_GROUP_PRI 0
#define _INT16_SUB_G_PRI 0
#define _INT17_GROUP_PRI 0
#define _INT17_SUB_G_PRI 0
#define _INT18_GROUP_PRI 0
#define _INT18_SUB_G_PRI 0
#define _INT19_GROUP_PRI 0
#define _INT19_SUB_G_PRI 0
#define _INT20_GROUP_PRI 0
#define _INT20_SUB_G_PRI 0
#define _INT21_GROUP_PRI 0
#define _INT21_SUB_G_PRI 0
#define _INT22_GROUP_PRI 0
#define _INT22_SUB_G_PRI 0
#define _INT23_GROUP_PRI 0
#define _INT23_SUB_G_PRI 0
#define _INT24_GROUP_PRI 0
#define _INT24_SUB_G_PRI 0
#define _INT25_GROUP_PRI 0
#define _INT25_SUB_G_PRI 0
#define _INT26_GROUP_PRI 0
#define _INT26_SUB_G_PRI 0
#define _INT27_GROUP_PRI 0
#define _INT27_SUB_G_PRI 0
#define _INT28_GROUP_PRI 0
#define _INT28_SUB_G_PRI 0
#define _INT29_GROUP_PRI 0
#define _INT29_SUB_G_PRI 0
#define _INT30_GROUP_PRI 0
#define _INT30_SUB_G_PRI 0
#define _INT31_GROUP_PRI 0
#define _INT31_SUB_G_PRI 0
#define _INT32_GROUP_PRI 0
#define _INT32_SUB_G_PRI 0
#define _INT33_GROUP_PRI 0
#define _INT33_SUB_G_PRI 0
#define _INT34_GROUP_PRI 0
#define _INT34_SUB_G_PRI 0
#define _INT35_GROUP_PRI 0
#define _INT35_SUB_G_PRI 0
#define _INT36_GROUP_PRI 0
#define _INT36_SUB_G_PRI 0
#define _INT37_GROUP_PRI 0
#define _INT37_SUB_G_PRI 0
#define _INT38_GROUP_PRI 0
#define _INT38_SUB_G_PRI 0
#define _INT39_GROUP_PRI 0
#define _INT39_SUB_G_PRI 0
#define _INT40_GROUP_PRI 0
#define _INT40_SUB_G_PRI 0
#define _INT41_GROUP_PRI 0
#define _INT41_SUB_G_PRI 0
#define _INT42_GROUP_PRI 0
#define _INT42_SUB_G_PRI 0
#define _INT43_GROUP_PRI 0
#define _INT43_SUB_G_PRI 0
#define _INT44_GROUP_PRI 0
#define _INT44_SUB_G_PRI 0
#define _INT45_GROUP_PRI 0
#define _INT45_SUB_G_PRI 0
#define _INT46_GROUP_PRI 0
#define _INT46_SUB_G_PRI 0
#define _INT47_GROUP_PRI 0
#define _INT47_SUB_G_PRI 0
#define _INT48_GROUP_PRI 2
#define _INT48_SUB_G_PRI 1
#define _INT49_GROUP_PRI 0
#define _INT49_SUB_G_PRI 0
#define _INT50_GROUP_PRI 0
#define _INT50_SUB_G_PRI 0
#define _INT51_GROUP_PRI 0
#define _INT51_SUB_G_PRI 0
#define _INT52_GROUP_PRI 0
#define _INT52_SUB_G_PRI 0
#define _INT53_GROUP_PRI 0
#define _INT53_SUB_G_PRI 0
#define _INT54_GROUP_PRI 0
#define _INT54_SUB_G_PRI 0
#define _INT55_GROUP_PRI 0
#define _INT55_SUB_G_PRI 0
#define _INT56_GROUP_PRI 0
#define _INT56_SUB_G_PRI 0
#define _INT57_GROUP_PRI 0
#define _INT57_SUB_G_PRI 0
#define _INT58_GROUP_PRI 0
#define _INT58_SUB_G_PRI 0
#define _INT59_GROUP_PRI 0
#define _INT59_SUB_G_PRI 0
#define _INT60_GROUP_PRI 0
#define _INT60_SUB_G_PRI 0
#define _INT61_GROUP_PRI 0
#define _INT61_SUB_G_PRI 0
#define _INT62_GROUP_PRI 0
#define _INT62_SUB_G_PRI 0
#define _INT63_GROUP_PRI 0
#define _INT63_SUB_G_PRI 0

#define Usage_Fault_GROUP_PRI 3
#define Usage_Fault_SUB_G_PRI 1
#define Bus_Fault_GROUP_PRI 0
#define Bus_Fault_SUB_G_PRI 0
#define Memory_Management_Fault_GROUP_PRI 0
#define Memory_Management_Fault_SUB_G_PRI 0
#define SVCall_GROUP_PRI 0
#define SVCall_SUB_G_PRI 0
#define SysTick_Exception_GROUP_PRI 0
#define SysTick_Exception_SUB_G_PRI 0
#define PendSV_GROUP_PRI 0
#define PendSV_SUB_G_PRI 0
#define Debug_GROUP_PRI 0
#define Debug_SUB_G_PRI 0

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void intConfig_APINT_init(void);
void intConfig_PRIn_init(void);
void intConfig_SYSPRIn_init(void);

#endif /* INTCTR_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: intCtr_Lcfg.h
 *********************************************************************************************************************/
