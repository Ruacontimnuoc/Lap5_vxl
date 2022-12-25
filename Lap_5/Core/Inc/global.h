/*
 * global.h
 *
 *  Created on: Dec 15, 2022
 *      Author: tirua
 */

#include "main.h"

#ifndef  INC_GLOBAL_H_
#define  INC_GLOBAL_H_

#define MAX_BUFFER_SIZE 30

extern uint8_t temp;
extern uint8_t index_buffer;
extern uint8_t flag_buffer;

extern uint8_t command_flag;
extern uint8_t command_data[];
extern uint32_t ADC_value;

#endif /* INC_GLOBAL_H_ */
