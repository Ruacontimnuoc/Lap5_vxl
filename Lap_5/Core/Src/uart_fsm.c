/*
 * uart_fsm.c
 *
 *  Created on: Dec 15, 2022
 *      Author: tirua
 */


#include "uart_fsm.h"
#include "parser_fsm.h"
#include "main.h"
#include "global.h"
#include <string.h>

ADC_HandleTypeDef  hadc1;
UART_HandleTypeDef huart2;

uint8_t uart_status = READY;
uint8_t ADC_value_memory = 0;
uint8_t str[30];

void uart_fsm(){
	switch(uart_status){
		case READY:
			ADC_value = HAL_ADC_GetValue(&hadc1);
			if(command_flag == 1 && command_data == "RST"){
				uart_status = SENDING;
				ADC_value_memory = ADC_value;
			}
			if(command_flag == 1 && command_data == "OK"){
				uart_status = COMPLETE;
				setTimer1(time_wating);
			}
			break;
		case SENDING:
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			HAL_UART_Transmit(&huart2, str, sprintf(str, "!ADC = ", ADC_value), 1000);
			uart_status = WATING_VERITIFIED;
			break;
		case WATING_VERITIFIED:
			break;
		case COMPLETE:
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			break;
		default:
			break;
	}
}
