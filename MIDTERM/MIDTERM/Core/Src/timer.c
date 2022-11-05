/*
 * timer.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Leanhthi
 */


#include "timer.h"
int timer0_flag = 0;
int timer0_counter = 0;

int timer1_flag = 0;
int timer1_counter = 0;

int timer2_flag = 0;
int timer2_counter = 0;

int timer3_flag = 0;
int timer3_counter = 0;


void setTimer0(int duration){
	timer0_counter = duration;
	timer0_flag = 0;
};
void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag = 0;
};
void setTimer2(int duration){
	timer2_counter = duration;
	timer2_flag = 0;
}
void setTimer3(int duration){
	timer3_counter = duration;
	timer3_flag = 0;
}





void timerRun0(){
	if(timer0_counter > 0 )
	{
		timer0_counter --;
		if(timer0_counter <=0){
			timer0_flag=1;
		}
	}
};
void timerRun1(){
	if(timer1_counter > 0 )
	{
		timer1_counter --;
		if(timer1_counter <=0){
			timer1_flag=1;
		}
	}
};
void timerRun2(){
	if(timer2_counter > 0 )
	{
		timer2_counter --;
		if(timer2_counter <=0){
			timer2_flag=1;
		}
	}
};

void timerRun3(){
	if(timer3_counter > 0 )
	{
		timer3_counter --;
		if(timer3_counter <=0){
			timer3_flag=1;
		}
	}
};



