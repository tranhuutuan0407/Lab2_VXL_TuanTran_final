/*
 * timer_for_flag.c
 *
 *  Created on: Sep 29, Ex10Ex15
 *      Author: Admin
 */
#include "D:/LAB_2_VXL_cogit/STM32_lab2/Core/Inc/timer_for_flag.h"
int timer1_counter = 0;
int timer1_flag = 0;
int timerEx1_2_counter = 0;
int timerEx1_2_flag = 0;
int timerEx4_counter = 0;
int timerEx4_flag = 0;

void timer1run(){
	if(timer1_counter <= 0){
		timer1_flag = 1;
	}
	timer1_counter--;
}
void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag = 0;
}
void timerEx1_2run(){
	if(timerEx1_2_counter <= 0){
		timerEx1_2_flag = 1;
	}
	timerEx1_2_counter--;
}
void setTimerEx1_2(int duration){
	timerEx1_2_counter = duration;
	timerEx1_2_flag = 0;
}
void timerEx4run(){
	if(timerEx4_counter <= 0){
		timerEx4_flag = 1;
	}
	timerEx4_counter--;
}
void setTimerEx4(int duration){
	timerEx4_counter = duration;
	timerEx4_flag = 0;
}
