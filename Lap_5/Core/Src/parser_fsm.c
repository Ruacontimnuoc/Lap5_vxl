/*
 * parser_fsm.c
 *
 *  Created on: Dec 15, 2022
 *      Author: tirua
 */


#include "parser_fsm.h"
#include "main.h"
#include "global.h"
#include <string.h>

uint8_t parser_index = 0;
uint8_t parser_status = INIT_COMMAND_PARSER;

void parser_fsm(){
	switch(parser_status){
		case INIT_COMMAND_PARSER:
			if(temp == '!' ) parser_status = START;
			break ;
		case START:
			if(temp == '#'){
				parser_status = END;
			}
			if(temp == '!'){
				parser_status = START;
				command_data[0] = '\0';
			}
			else{
				command_data[parser_index++] = temp;
			}
			break;
		case END:
			command_flag = 1;
			parser_status = INIT_COMMAND_PARSER;
			break;
		default:
			break;
	}
}
