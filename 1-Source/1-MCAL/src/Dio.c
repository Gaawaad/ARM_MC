/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Dio.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Dio.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

void Dio_ConfigChannel(Dio_PortType PortId, Dio_ChannelType ChannelId, Dio_Dir Direction)
{
    switch (PortId)
    {
    case Dio_PORTA:
        if (Direction == INPUT)
        {
            GPIODIR_A_Reg &= ~(1 << ChannelId);
        }
        else
        {
            GPIODIR_A_Reg |= (1 << ChannelId);
        }
        break;

    case Dio_PORTB:
        if (Direction == INPUT)
        {
            GPIODIR_B_Reg &= ~(1 << ChannelId);
        }
        else
        {
            GPIODIR_B_Reg |= (1 << ChannelId);
        }
        break;

    case Dio_PORTC:
        if (Direction == INPUT)
        {
            GPIODIR_C_Reg &= ~(1 << ChannelId);
        }
        else
        {
            GPIODIR_C_Reg |= (1 << ChannelId);
        }
        break;

    case Dio_PORTD:
        if (Direction == INPUT)
        {
            GPIODIR_D_Reg &= ~(1 << ChannelId);
        }
        else
        {
            GPIODIR_D_Reg |= (1 << ChannelId);
        }
        break;

    case Dio_PORTE:
        if (Direction == INPUT)
        {
            GPIODIR_E_Reg &= ~(1 << ChannelId);
        }
        else
        {
            GPIODIR_E_Reg |= (1 << ChannelId);
        }
        break;

    case Dio_PORTF:
        if (Direction == INPUT)
        {
            GPIODIR_F_Reg &= ~(1 << ChannelId);
        }
        else
        {
            GPIODIR_F_Reg |= (1 << ChannelId);
        }
        break;

    default:
        break;
    }
}
Dio_LevelType Dio_ReadChannel(Dio_PortType PortId, Dio_ChannelType ChannelId)
{
    switch (PortId)
    {
    case Dio_PORTA:
        return ((GPIODATA_A_Reg >> ChannelId) & 0x1);
        break;
    case Dio_PORTB:
        return ((GPIODATA_B_Reg >> ChannelId) & 0x1);
        break;
    case Dio_PORTC:
        return ((GPIODATA_C_Reg >> ChannelId) & 0x1);
        break;
    case Dio_PORTD:
        return ((GPIODATA_D_Reg >> ChannelId) & 0x1);
        break;
    case Dio_PORTE:
        return ((GPIODATA_E_Reg >> ChannelId) & 0x1);
        break;
    case Dio_PORTF:
        return ((GPIODATA_F_Reg >> ChannelId) & 0x1);
        break;

    default:
        break;
    }
}
void Dio_WriteChannel(Dio_PortType PortId, Dio_ChannelType ChannelId, Dio_LevelType Level)
{
    switch (PortId)
    {
    case Dio_PORTA:
        if (Level == HIGH)
        {
            GPIODATA_A_Reg |= ((1 << (ChannelId)));
        }
        else
        {
            GPIODATA_A_Reg &= ~(1 << (ChannelId));
        }
        break;

    case Dio_PORTB:
        if (Level == HIGH)
        {
            GPIODATA_B_Reg |= ((1 << (ChannelId)));
        }
        else
        {
            GPIODATA_B_Reg &= ~(1 << (ChannelId));
        }
        break;

    case Dio_PORTC:
        if (Level == HIGH)
        {
            GPIODATA_C_Reg |= ((1 << (ChannelId)));
        }
        else
        {
            GPIODATA_C_Reg &= ~(1 << (ChannelId));
        }
        break;

    case Dio_PORTD:
        if (Level == HIGH)
        {
            GPIODATA_D_Reg |= ((1 << (ChannelId)));
        }
        else
        {
            GPIODATA_D_Reg &= ~(1 << (ChannelId));
        }
        break;

    case Dio_PORTE:
        if (Level == HIGH)
        {
            GPIODATA_E_Reg |= ((1 << (ChannelId)));
        }
        else
        {
            GPIODATA_E_Reg &= ~(1 << (ChannelId));
        }
        break;

    case Dio_PORTF:
        if (Level == HIGH)
        {
            GPIODATA_F_Reg |= ((1 << (ChannelId)));
        }
        else
        {
            GPIODATA_F_Reg &= ~(1 << (ChannelId));
        }
        break;

    default:
        break;
    }
}
void Dio_ToggleChannel(Dio_PortType PortId, Dio_ChannelType ChannelId)
{
    switch (PortId)
    {
    case Dio_PORTA:
        GPIODATA_A_Reg ^= (1 << ChannelId);
    case Dio_PORTB:
        GPIODATA_B_Reg ^= (1 << ChannelId);
    case Dio_PORTC:
        GPIODATA_C_Reg ^= (1 << ChannelId);
    case Dio_PORTD:
        GPIODATA_D_Reg ^= (1 << ChannelId);
    case Dio_PORTE:
        GPIODATA_E_Reg ^= (1 << ChannelId);
    case Dio_PORTF:
        GPIODATA_F_Reg ^= (1 << ChannelId);
    default:
        break;
    }
}
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId)
{
    switch (PortId)
    {
    case Dio_PORTA:
        return GPIODATA_A_Reg;
        break;

    case Dio_PORTB:
        return GPIODATA_B_Reg;
        break;

    case Dio_PORTC:
        return GPIODATA_C_Reg;
        break;

    case Dio_PORTD:
        return GPIODATA_D_Reg;
        break;

    case Dio_PORTE:
        return GPIODATA_E_Reg;
        break;

    case Dio_PORTF:
        return GPIODATA_A_Reg;
        break;

    default:
        break;
    }
}
void Dio_WritePort(Dio_PortType PortId, Dio_PortLevelType Level)
{
    switch (PortId)
    {
    case Dio_PORTA:
        GPIODATA_A_Reg = Level;
        break;

    case Dio_PORTB:
        GPIODATA_B_Reg = Level;
        break;

    case Dio_PORTC:
        GPIODATA_C_Reg = Level;
        break;

    case Dio_PORTD:
        GPIODATA_D_Reg = Level;
        break;

    case Dio_PORTE:
        GPIODATA_E_Reg = Level;
        break;

    case Dio_PORTF:
        GPIODATA_F_Reg = Level;
        break;

    default:
        break;
    }
}
/**********************************************************************************************************************
 *  END OF FILE: Dio.c
 *********************************************************************************************************************/
