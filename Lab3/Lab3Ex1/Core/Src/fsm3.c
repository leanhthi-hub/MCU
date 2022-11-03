/*
 * fsm3.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Leanhthi
 */

#include "fsm.h"

void fsm_automatic_run3(){
	switch (status3	) {
		case RUNNING:
			if( timer0_flag == 1) {
					  timer--;
					  timer2--;
					  setTimer0 (10) ;
				  }
			if(button_flag[0]==1){
				button_flag[0]=0;
				status1=Waiting;
				status2=Waiting;
				status3=MAN_RED;
				timer2=RED_TIME/10;
			}
			break;

		case INIT:
			status1=INIT;
			status2=INIT;
			status3=RUNNING;



			break;
		case MAN_RED:
			toogleRed();
			toogleRed1();
			if(timer2>99)timer2=0;

			timer=01;
			if(button_flag[0]==1){
				button_flag[0]=0;
				timer2=GREEN_TIME/10;
				status3=MAN_GREEN;
			}
			if(button_flag[1]==1){
				button_flag[1]=0;
				timer2++;
			}
			if(button_flag[2]==1){
				button_flag[2]=0;
				timer2--;
			}
			if(button_flag[3]==1){
				button_flag[3]=0;
				RED_TIME=timer2*10;
			}
			break;
		case MAN_GREEN:
			toogleGreen();
			toogleGreen1();
			if(timer2>99)timer2=0;

			timer=01;
			if(button_flag[0]==1){
				button_flag[0]=0;
				timer2=YELLOW_TIME/10;
				status3=MAN_YELLOW;
			}
			if(button_flag[1]==1){
				button_flag[1]=0;
				timer2++;
			}
			if(button_flag[2]==1){
				button_flag[2]=0;
				timer2--;
			}
			if(button_flag[3]==1){
				button_flag[3]=0;
				YELLOW_TIME=timer2*10;
			}



			break;
		case MAN_YELLOW:
			toogleYellow();
			toogleYellow1();
			if(timer2>99)timer2=0;

			timer=01;
			if(button_flag[0]==1){
				button_flag[0]=0;

				status3=INIT;
			}
			if(button_flag[1]==1){
				button_flag[1]=0;
				timer2++;
			}
			if(button_flag[2]==1){
				button_flag[2]=0;
				timer2--;
			}
			if(button_flag[3]==1){
				button_flag[3]=0;
				YELLOW_TIME=timer2*10;
			}


			break;

		default:
			break;
	}
}
