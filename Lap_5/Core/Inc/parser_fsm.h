/*
 * parser_fsm.h
 *
 *  Created on: Dec 15, 2022
 *      Author: tirua
 */
#include "main.h"
#ifndef INC_PARSER_FSM_H_
#define INC_PARSER_FSM_H_


#define INIT_COMMAND_PARSER 		0
#define START						1
#define END							2
extern uint8_t parser_status;
extern uint8_t parser_index;

void parser_fsm();

#endif /* INC_PARSER_FSM_H_ */
