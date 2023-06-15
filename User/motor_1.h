#ifndef __MOTOR1_H
#define __MOTOR1_H
 
 
#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
 
#define High    1
#define Low     0
 
#define IN1(a) if (a)  \
	GPIO_SetBits(GPIOA,GPIO_Pin_2);\
else  \
	GPIO_ResetBits(GPIOA,GPIO_Pin_2)
 
#define IN2(a) if (a)  \
	GPIO_SetBits(GPIOA,GPIO_Pin_3);\
else  \
	GPIO_ResetBits(GPIOA,GPIO_Pin_3)
 
#define IN3(a) if (a)  \
	GPIO_SetBits(GPIOA,GPIO_Pin_5);\
else  \
	GPIO_ResetBits(GPIOA,GPIO_Pin_5)
 
#define IN4(a) if (a)  \
	GPIO_SetBits(GPIOA,GPIO_Pin_6);\
else  \
	GPIO_ResetBits(GPIOA,GPIO_Pin_6)

void Motor_Config(void);

void Motor_1_STOP(void);
void Motor_1_PRun(void);
void Motor_1_NRun(void);

void Motor_2_STOP(void);
void Motor_2_PRun(void);
void Motor_2_NRun(void);

void straight_run();
void back();
void P_right();
void P_left();
void XP_right();
void XP_left();
void N_right();
void N_left();
void XN_right();
void XN_left();
void stop();
void back_into_garage();
void back_into_garage_2();
void back_into_garage_3();
void cefang_into_garage();
void cefang_into_garage2();
void cefang_into_garage3();
void xunji();

 
#endif