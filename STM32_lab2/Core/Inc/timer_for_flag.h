/*
 * timer_for_flag.h
 *
 *  Created on: Sep 29, 2025
 *      Author: Admin
 */

#ifndef INC_TIMER_FOR_FLAG_H_
#define INC_TIMER_FOR_FLAG_H_
extern int timer1_flag;
extern int timer3_flag;
extern int timer2_flag;
extern int timer4_flag;
extern int timer5_flag;
void setTimer1(int duration);
void timer1run();
void setTimer3(int duration);
void timer3run();
void setTimer2(int duration);
void timer2run();
void setTimer4(int duration);
void timer4run();
void setTimer5(int duration);
void timer5run();

#endif /* INC_TIMER_FOR_FLAG_H_ */
