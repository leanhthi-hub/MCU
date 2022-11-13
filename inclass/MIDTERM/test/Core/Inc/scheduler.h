/*
 * scheduler.h
 *
 *  Created on: Nov 11, 2022
 *      Author: Leanhthi
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_


typedef struct{
	void (*pTask)(void);
	uint32_t 	Delay;
	uint32_t 	Period;
	uint8_t 	RunMe;

	uint32_t 	TaskID;
}sTasks;

#define SCH_MAX_TASKS	40


void SCH_Init(void);

void SCH_Add_Task ( void (*pFunction)() ,
					uint32_t DELAY,
					uint32_t PERIOD);

void SCH_Update(void);

void SCH_Dispatch_Tasks(void);

sTasks SCH_tasks_G[SCH_MAX_TASKS];
uint8_t current_index_task = 0;


#endif /* INC_SCHEDULER_H_ */