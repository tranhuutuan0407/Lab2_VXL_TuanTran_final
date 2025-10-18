/*
 * timer_for_flag.c
 *
 *  Created on: Sep 29, Ex10Ex15
 *      Author: Admin
 */
#include "D:/LAB_2_VXL_cogit/STM32_lab2/Core/Inc/timer_for_flag.h"
int timer1_counter = 0;
int timer1_flag = 0;
int timer3_counter = 0;
int timer3_flag = 0;
int timer2_counter = 0;
int timer2_flag = 0;
int timer4_counter = 0;
int timer4_flag = 0;
int timer5_counter = 0;
int timer5_flag = 0;

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
void timer3run(){
	if(timer3_counter <= 0){
		timer3_flag = 1;
	}
	timer3_counter--;
}
void setTimer3(int duration){
	timer3_counter = duration;
	timer3_flag = 0;
}
void timer2run(){
	if(timer2_counter <= 0){
		timer2_flag = 1;
	}
	timer2_counter--;
}
void setTimer2(int duration){
	timer2_counter = duration;
	timer2_flag = 0;
}
void timer4run(){
	if(timer4_counter <= 0){
		timer4_flag = 1;
	}
	timer4_counter--;
}
void setTimer4(int duration){
	timer4_counter = duration;
	timer4_flag = 0;
}
void timer5run(){
	if(timer5_counter <= 0){
		timer5_flag = 1;
	}
	timer5_counter--;
}
void setTimer5(int duration){
	timer5_counter = duration;
	timer5_flag = 0;
}
