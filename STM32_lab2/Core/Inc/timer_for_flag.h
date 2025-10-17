/*
 * timer_for_flag.h
 *
 *  Created on: Sep 29, 2025
 *      Author: Admin
 */

#ifndef INC_TIMER_FOR_FLAG_H_
#define INC_TIMER_FOR_FLAG_H_
extern int timer1_flag;
extern int timerEx1_2_flag;
extern int timerEx4_flag;
void setTimer1(int duration);
void timer1run();
void setTimerEx1_2(int duration);
void timerEx1_2run();
void setTimerEx4(int duration);
void timerEx4run();

#endif /* INC_TIMER_FOR_FLAG_H_ */
