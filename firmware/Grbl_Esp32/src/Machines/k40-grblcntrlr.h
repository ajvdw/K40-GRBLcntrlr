#pragma once
// clang-format off

/*
        K40-grblcntrlr.h
        Part of Grbl_ESP32

        Pen assignments for the k40 grblcntrlr v0.91

        2021    - A.J. van de Werken

        Grbl_ESP32 is free software: you can redistribute it and/or modify
        it under the terms of the GNU General Public License as published by
        the Free Software Foundation, either version 3 of the License, or
        (at your option) any later version.

        Grbl is distributed in the hope that it will be useful,
        but WITHOUT ANY WARRANTY; without even the implied warranty of
        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
        GNU General Public License for more details.

        You should have received a copy of the GNU General Public License
        along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/

#define MACHINE_NAME "K40-GRBLCNTRLR"

// Pick a board version
#define GRBLCNTRLR 0.91

#define X_STEP_PIN		GPIO_NUM_27
#define X_DIRECTION_PIN		GPIO_NUM_26

#define Y_STEP_PIN		GPIO_NUM_32
#define Y_DIRECTION_PIN		GPIO_NUM_25

#define X_DISABLE_PIN		GPIO_NUM_21
#define Y_DISABLE_PIN		GPIO_NUM_22


#define X_LIMIT_PIN		GPIO_NUM_2
#define Y_LIMIT_PIN		GPIO_NUM_4

#define SPINDLE_TYPE            	SpindleType::LASER
#define LASER_OUTPUT_PIN		GPIO_NUM_33


// defaults
#define DEFAULT_STEP_PULSE_MICROSECONDS 	3
#define DEFAULT_STEPPER_IDLE_LOCK_TIME 	250 	// stay on

#define DEFAULT_STEPPING_INVERT_MASK  	0   	// uint8_t
#define DEFAULT_DIRECTION_INVERT_MASK 	3   	// uint8_t
#define DEFAULT_INVERT_ST_ENABLE 		0   	// boolean
#define DEFAULT_INVERT_LIMIT_PINS 	0   	// boolean
#define DEFAULT_INVERT_PROBE_PIN 		0   	// boolean

#define DEFAULT_STATUS_REPORT_MASK 	0   	// Lightburn Specific? Previous $10=1

#define DEFAULT_JUNCTION_DEVIATION 	0.01  	// mm
#define DEFAULT_ARC_TOLERANCE 		0.002 	// mm
#define DEFAULT_REPORT_INCHES 		0     	// false

#define DEFAULT_SOFT_LIMIT_ENABLE 	1 	// false
#define DEFAULT_HARD_LIMIT_ENABLE 	0 	// false
	
#define DEFAULT_HOMING_ENABLE 		1
#define DEFAULT_HOMING_DIR_MASK 		1 	// moving dir pos Z, neg X, pos Y
#define DEFAULT_HOMING_FEED_RATE 		200.0 	// mm/min
#define DEFAULT_HOMING_SEEK_RATE 		1000.0	// mm/min
#define DEFAULT_HOMING_DEBOUNCE_DELAY 	250 	// msec (0-65k)
#define DEFAULT_HOMING_PULLOFF 		3.0 	// mm

#define DEFAULT_SPINDLE_RPM_MAX 		100.0 	// rpm, max perc laser
#define DEFAULT_SPINDLE_RPM_MIN 		0.0   	// rpm, min perc laser

#define DEFAULT_LASER_MODE 		1 

#define DEFAULT_X_STEPS_PER_MM 		78.75 	// k40 specific
#define DEFAULT_Y_STEPS_PER_MM 		78.75 	// k40 specific
#define DEFAULT_Z_STEPS_PER_MM 		80.0 	// not needed

#define DEFAULT_X_MAX_RATE 		3000.0 	// mm/min
#define DEFAULT_Y_MAX_RATE 		3000.0 	// mm/min
#define DEFAULT_Z_MAX_RATE 		1000.0 	// mm/min // not needed

#define DEFAULT_X_ACCELERATION 		40.0 	// mm/sec^2
#define DEFAULT_Y_ACCELERATION 		40.0 	// mm/sec^2
#define DEFAULT_Z_ACCELERATION 		10.0 	// mm/sec^2 // not needed

#define DEFAULT_X_MAX_TRAVEL 		250.0 	// work area size mm NOTE: Must be a positive value.
#define DEFAULT_Y_MAX_TRAVEL 		220.0 	// work area size mm NOTE: Must be a positive value.
#define DEFAULT_Z_MAX_TRAVEL 		100.0 	// not needed
