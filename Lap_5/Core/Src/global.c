/*
 * global.c
 *
 *  Created on: Dec 15, 2022
 *      Author: tirua
 */

#include "global.h"

uint8_t temp = 0;
uint8_t buffer[MAX_BUFFER_SIZE];
uint8_t index_buffer = 0;
uint8_t flag_buffer = 0;

uint8_t command_flag = 0;
uint8_t command_data[30];
uint32_t ADC_value = 0;
