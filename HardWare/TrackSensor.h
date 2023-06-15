#ifndef __TRACKSENSOR_H
#define __TRACKSENSOR_H

#include "stm32f10x.h"
#include "PWM.h"
#include "motor_1.h"
#include "delay.h"

#define Tracking_D0		GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_3)
#define Tracking_D1		GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_4)
#define Tracking_D2		GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_5)
#define Tracking_D3		GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6)
#define Tracking_D4		GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_7)



/*
void run(void);
void left(void);
void right(void);
void back(void);
*/
void b_left(void);
void b_ight(void);
void stop(void);
void turn(void);
void motor_gpio(void);
void XUNJI_Init(void);

void TCRT5000_Init(void);


#endif