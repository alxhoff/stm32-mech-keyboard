/*
 * CLI.h
 *
 *  Created on: Sep 16, 2017
 *      Author: alxhoff
 */

#ifndef CLI_H_
#define CLI_H_

#include <stdio.h>

#include "states.h"
#include "types.h"

int8_t state_enter_CLI();
int8_t state_CLI();
int8_t CLI_process_key(key_code_w_mod_t input);

#endif /* CLI_H_ */