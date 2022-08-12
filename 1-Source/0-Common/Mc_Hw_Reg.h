/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mc_Hw_Reg.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef MC_HW_REG
#define MC_HW_REG

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define _CORTEXM4_PIRF_BASE_ADD             (0xE000E000)
#define APINT_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0xD0C))
#define CONTROL_Reg                         *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0xD04))
#define PRI0_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x400))
#define PRI1_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x404))
#define PRI2_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x408))
#define PRI3_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x40C))
#define PRI4_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x410))
#define PRI5_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x414))
#define PRI6_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x418))
#define PRI7_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x41C))
#define PRI8_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x420))
#define PRI9_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x424))
#define PRI10_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x428))
#define PRI11_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x42C))
#define PRI12_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x430))
#define PRI13_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x434))
#define PRI14_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x438))
#define PRI15_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x43C))
#define SYSPRI1_Reg                         *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0xD18))
#define SYSPRI2_Reg                         *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0xD1C))
#define SYSPRI3_Reg                         *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0xD20))
#define EN0_Reg                             *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x100))
#define EN1_Reg                             *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x104))
#define EN2_Reg                             *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x108))
#define EN3_Reg                             *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x10C))
#define EN4_Reg                             *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x110))
#define DIS0_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x180))
#define DIS1_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x184))
#define DIS2_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x188))
#define DIS3_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x18C))
#define DIS4_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x190))
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* MC_HW_REG */

/**********************************************************************************************************************
 *  END OF FILE: Mc_Hw_Reg.h
 *********************************************************************************************************************/
