/*
 * layers.c
 *
 *  Created on: Sep 10, 2017
 *      Author: alxhoff
 */

#include "layers.h"
#include "types.h"
#include "states.h"
#include "scan.h"
#include "keymap.h"


states_err_t state_enter_layer_set()
{
	current_keyboard_state = layer_set;
	vTaskDelay(100);
	return states_ok;
}

states_err_t state_exit_layer_set()
{
	current_keyboard_state = typing;
	return states_ok;
}

states_err_t state_layer_set( keymap_list_t* layer_list )
{
	key_code layer = scan_get_single_key( keyboard_devs->keyboard, layer_list );
	//TODO CHECKL THAT RET IS VALID LAYER
	layer_list->current_layer = layer_table_get_ID_w_key(layer_list, layer);
	state_exit_layer_set();
	return states_ok;
}