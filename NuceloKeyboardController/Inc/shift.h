/*
 * shift.h
 *
 *  Created on: Sep 19, 2017
 *      Author: alxhoff
 */

#ifndef SHIFT_H_
#define SHIFT_H_


#include "SN54HC595.h"
#include "datatypes.h"

shift_err_t shift_init(key_devices_t* keyboard_devices, shift_array_t* shift_dev);

#endif /* SHIFT_H_ */