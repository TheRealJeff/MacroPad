#pragma once

#include "quantum.h"

// clang-format off

// layout with all the switches supported by the PCB

#define LAYOUT_ortho_3x4( \
	K000, K001, K002, \
	K100, K101, K102, \
	K200, K201, K202, \
	K300, K301, K302 \
) { \
	{ K000,  K001,  K002 }, \
	{ K100,  K101,  K102 }, \
	{ K200,  K201,  K202 }, \
	{ K300,  K301,  K302 } \
}


// clang-format on
