#include "lib_draw.h"


const uint8_t showup6_Table[] = {
		0x00,0x48,0x00,0x45,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x92,
		0x92,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0x92,0x92,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x92,0xFF,0xFF,0x92,0xFF,0xFF,0x2A,0x2A,0x2A,0x2A,
		0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0xFF,0xFF,0x92,0xFF,0xFF,0x92,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x33,0xFF,
		0x2A,0x2A,0x92,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x2A,0x92,0x2A,0x2A,0xFF,0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x2A,0x2A,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x2A,0x2A,0x2A,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x2A,0x2A,0x25,0x25,
		0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x33,0x25,0x25,0x25,0x25,0x25,0x2A,0x2A,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x2A,0x2A,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,0x2A,
		0x2F,0x2A,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x2A,0x33,0x2F,0x2A,0x25,0x25,0x25,0x25,
		0x25,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x2A,0x33,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x33,0x2A,0x2A,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x33,
		0x92,0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x2A,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x2A,0x2A,0x92,0x33,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x92,0x92,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x92,0x92,0x2A,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x33,0x2A,0x92,
		0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x2A,0x33,0x92,0x2A,0x33,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0x2A,0x2F,0x2A,0x25,0x2A,0x92,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x92,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0x92,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x92,0x2A,0x25,0x2A,0x2F,
		0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x2F,0x2A,0x25,0x25,0x2A,
		0x92,0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x2A,0x2A,0x92,0x2A,0x25,0x25,0x2A,0x2F,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x2A,0x2A,0x2A,0x25,0x25,0x25,0x2A,0x33,0x33,0x33,0x2A,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2F,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x2F,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x33,0x33,0x2A,0x25,0x25,0x25,
		0x2A,0x2A,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,
		0x2A,0x2A,0x2A,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0x33,0x2A,0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,0x2A,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x2A,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0x33,0x33,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0x33,
		0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x33,0x92,0x92,0x33,0xFF,0x2A,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x2A,0xFF,0x33,0x92,0x92,0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0x33,0xFF,0xFF,0x92,0x92,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,0x25,0x25,0x2A,0x2A,0x2A,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2A,0x2A,0x2A,0x25,0x25,0x25,0x2A,0x33,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x92,0x92,0xFF,
		0xFF,0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x33,0xFF,0xFF,0xFF,0x33,0x92,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x92,0x2A,0x25,0x2A,
		0x2A,0x2F,0x33,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0x33,0x33,0x2F,0x2A,0x2A,0x25,0x2A,0x92,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x92,0x33,0xFF,0xFF,0xFF,0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0x33,0xFF,0xFF,0x2A,0x33,0x92,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x92,0x2A,0x2A,0x2F,0x33,0x33,0x2F,0x33,0x2F,0x2A,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x33,0x2F,0x33,0x33,0x2F,0x2A,0x2A,0x92,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x92,0x33,0x2A,0xFF,0xFF,
		0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x33,0x2A,0x25,0x25,
		0x33,0x33,0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x92,0x92,0x92,0x33,
		0x2A,0x2A,0x2A,0x2A,0x33,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x33,
		0x2A,0x2A,0x2A,0x2A,0x33,0x92,0x92,0x92,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x33,0x33,0x33,0x25,0x25,0x2A,0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x2A,0x2A,0x2A,0x2A,0x25,0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,
		0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,0x25,0x25,0x25,0x2A,0x2A,0x2A,0x2A,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x2A,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,
		0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x2A,0x33,0x2F,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2F,0x33,0x2A,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x33,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x33,0x25,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x2F,
		0x2F,0x2F,0x2F,0x2F,0x2F,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x25,0x33,0x25,0x25,0x25,0x25,0x2A,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x33,0x33,0x92,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x2A,0x2F,0x2F,0x33,0x33,0x33,0x33,0x33,0x33,0x2F,0x2F,0x2A,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x92,
		0x33,0x33,0x25,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x33,0x33,0x3A,
		0x3A,0x3A,0x3A,0x3A,0x3A,0x33,0x33,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x2F,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x2F,0x33,0x3A,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0x3A,0x33,0x2F,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2F,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x33,0x3A,0xBB,0xBB,
		0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0x3A,0x33,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x2A,0x2F,0x3A,0x3A,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0x3A,0x3A,
		0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x3A,0xBB,0xBB,0xBB,
		0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0x3A,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x2A,0x2F,0x3A,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0x3A,
		0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x3A,0x3A,0xBB,0xBB,
		0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0x3A,0x3A,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x2A,0x2F,0x33,0x3A,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0x3A,0x33,
		0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2F,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x33,0x3A,0xBB,
		0xBB,0xBB,0xBB,0xBB,0xBB,0x3A,0x33,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x2F,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x2A,0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x2F,0x33,0x33,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x33,0x33,0x2F,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x2A,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x25,0x33,0x33,0x92,0x2A,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x2F,0x33,
		0x33,0x33,0x33,0x33,0x33,0x2F,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x92,0x33,0x33,0x25,0x25,0x25,0x25,0x25,0x2A,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,
		0x25,0x25,0x33,0x25,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x33,0x2A,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0x25,0x33,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x2F,0x2A,
		0x2A,0x2A,0x2A,0x2A,0x2A,0x2F,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x2A,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,
		0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2A,0x2A,0x2A,0x2A,
		0x25,0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x2A,
		0x25,0x25,0x25,0x25,0x2A,0x2A,0x2A,0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x33,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x33,0x2A,0x25,0x25,0x33,0x33,0x33,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x92,0x92,0x92,0x33,0x2A,0x2A,0x2A,0x2A,0x33,0x2F,0x2A,0x25,
		0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x33,0x2A,0x2A,0x2A,0x2A,0x33,0x92,0x92,0x92,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x33,0x33,0x25,0x25,0x2A,0x33,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x33,0xFF,0xFF,0x2A,0x33,
		0x92,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x92,0x2A,0x2A,0x2F,
		0x33,0x33,0x2F,0x33,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,
		0x33,0x2F,0x33,0x33,0x2F,0x2A,0x2A,0x92,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x92,0x33,0x2A,0xFF,0xFF,0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0x33,0xFF,0xFF,0xFF,0x33,0x92,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x92,0x2A,0x25,0x2A,0x2A,0x2F,0x33,0x33,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x33,0x2F,0x2A,0x2A,0x25,0x2A,0x92,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x92,0x33,0xFF,0xFF,
		0xFF,0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x33,0xFF,0xFF,0x92,0x92,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,0x25,
		0x25,0x2A,0x2A,0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,
		0x2A,0x2A,0x2A,0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x92,0x92,0xFF,0xFF,0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0x33,0x92,0x92,0x33,0xFF,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0xFF,0x33,0x92,
		0x92,0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x33,0x33,0xFF,0xFF,0x2A,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0x33,0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x2A,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2A,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,0x2A,0x2A,0x2A,0x33,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x2A,0x2A,0x2A,0x25,0x25,0x25,0x25,
		0x25,0x2A,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x2A,0x2A,0x25,0x25,0x25,0x2A,
		0x33,0x33,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2F,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2F,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x2A,0x33,0x33,0x33,0x2A,0x25,0x25,0x25,0x2A,0x2A,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0x2A,0x2F,0x2A,0x25,0x25,0x2A,0x92,0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2A,0x92,0x2A,0x25,0x25,0x2A,
		0x2F,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x2F,0x2A,0x25,0x2A,
		0x92,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x92,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x92,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x2A,0x92,0x2A,0x25,0x2A,0x2F,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x2A,0x33,0x2A,0x92,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x92,0x2A,0x33,0x2A,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x92,0x92,
		0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x2A,0x92,0x92,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x33,0x92,0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x2A,0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x2A,0x92,0x33,0x2A,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,
		0x2A,0x33,0x2F,0x2A,0x25,0x25,0x25,0x25,0x25,0x33,0x2A,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x33,0x25,0x25,0x25,0x25,0x25,
		0x2A,0x2F,0x33,0x2A,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x2A,0x2F,0x2A,0x25,0x25,0x25,
		0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x33,0x25,0x25,0x25,0x25,0x25,0x2A,0x2F,0x2A,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0x2A,0x2A,0x2A,0x25,0x25,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,0x2A,0x2A,
		0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2A,0x2A,0x2A,
		0x25,0x25,0x25,0x33,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,
		0x33,0x25,0x25,0x25,0x2A,0x2A,0x2A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x33,0xFF,0x2A,0x2A,0x92,0x2A,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x2A,0x92,0x2A,0x2A,0xFF,0x33,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x92,0xFF,
		0xFF,0x92,0xFF,0xFF,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,
		0xFF,0xFF,0x92,0xFF,0xFF,0x92,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x92,0x92,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x92,0x92,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,


};

VGA_Image showup6 = {
		showup6_Table,
		72,
		69

};