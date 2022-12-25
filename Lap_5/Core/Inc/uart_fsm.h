/*
 * uart_fsm.h
 *
 *  Created on: Dec 15, 2022
 *      Author: tirua
 */

#ifndef INC_UART_FSM_H_
#define INC_UART_FSM_H_

#include "main.h"

#define READY 	3
#define SENDING 4
#define WATING_VERITIFIED	5
#define COMPLETE 			6
#define time_wating			3000

extern uint8_t uart_status;
void uart_fsm();


#endif /* INC_UART_FSM_H_ */
