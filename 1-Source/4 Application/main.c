#include "SysCtr.h"
#include "GPIO.h"
#include "PORT.h"
#include "GPT.h"
void noti(void){
	
	
}
int main(void)
{
	SysCtr_Init();
	Gpt_Init(GPT_CH_A1,noti);
	GPT_StartTimer(GPT_CH_A1);
	while (1)
	{
	}
}
