#include "stm32f10x.h"         //???
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
 
#include "motor_1.h"
#include "Delay.h"
#include "PWM.h"
#include "TrackSensor.h"
#include "Serial.h"

uint8_t RxData;
int main(void)
{
	Serial_Init();
	/*
	while (1)
	{
		if (Serial_GetRxFlag()==1)
		{
			if (Serial_RxData == 0x45)
			{
				back_into_garage_3();
				//cefang_into_garage2();
			}
			else if (Serial_RxData == 0x46)
			{
				cefang_into_garage3();
			}
			else if (Serial_RxData == 0x47)
			{
				xunji();
			}
			else if (Serial_RxData == 0x18)
			{
				straight_run();
			}
			else if (Serial_RxData == 0x39)
			{
				stop();
			}
			else if (Serial_RxData == 0x5a)
			{
				P_right();
			}
			else if (Serial_RxData == 0x08)
			{
				P_left();
			}
			else if (Serial_RxData == 0x52)
			{
				back();
			}
			else if (Serial_RxData == 0x4a)
			{
				N_right();
			}
			else if (Serial_RxData == 0x42)
			{
				N_left();
			}
				
		}
	
	}
	*/
	back_into_garage_3();
}
