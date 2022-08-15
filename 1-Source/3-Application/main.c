#include "SysCtr.h"
#include "GPIO_Cfg.h"
#include "Dio.h"
int main(void)
{
	SysCtr_Init();
	GPIO_Unlock();
	GPIO_Digital_Enable();
	u8 read = 0;
	Dio_WritePort(Dio_PORTA, 0x12);
	return 0;
}
