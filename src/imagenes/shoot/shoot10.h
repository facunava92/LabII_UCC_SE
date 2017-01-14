#include "lib_draw.h"


const uint8_t shoot10_Table[] = {
		0x00,0x38,0x00,0x27,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x2A,0x2A,0x2A,0x2A,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x2B,0x2B,0x2B,0x2A,
		0x2A,0x29,0x2A,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x2A,0x4F,0x4F,0x4F,0x4F,0x2B,0x2A,0x29,0x2A,0x2A,0x2A,0x2A,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x53,0x53,0x53,0x53,
		0x53,0x4F,0x2A,0x29,0x2B,0x2B,0x2A,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x2A,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x2A,0x53,0x53,0x53,0x53,0x53,0x53,0x2B,0x2A,0x2B,0x2B,0x2B,0x2B,
		0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x29,0x2B,
		0x2B,0x4F,0x4F,0x2A,0x35,0x35,0x2A,0x2A,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x53,0x53,0xB6,0xB6,
		0x53,0x53,0x4F,0x2A,0x4F,0x4F,0x4F,0x2B,0x2B,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x29,0x29,0x2B,0x2B,0x4F,0x53,0x53,0x4F,0x2A,0x2A,0x2A,0x2A,
		0x2A,0x2A,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x2A,0x53,0xB6,0xDB,0xDB,0xB6,0x53,0x2B,0x2A,0x53,0x53,0x53,0x53,
		0x4F,0x4F,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x29,0x29,0x29,0x2B,0x4F,
		0x4F,0x53,0xDB,0x53,0x2A,0x29,0x29,0x29,0x2A,0x2A,0x2B,0x2B,0x2A,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x53,0x53,0xB6,0xB6,
		0x53,0x4F,0x2A,0x4F,0x53,0x53,0x53,0x53,0x53,0x53,0x4F,0x2A,0x35,0x29,0x29,0x29,
		0x29,0x35,0x29,0x29,0x2A,0x29,0x2B,0x2A,0x2A,0x2A,0x4F,0x53,0x2A,0x64,0x64,0x29,
		0x29,0x2B,0x2B,0x2B,0x2B,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x2A,0x53,0x53,0x53,0x53,0x4F,0x2A,0x2B,0x53,0x53,0x53,0x53,0x53,
		0x53,0x53,0x53,0x2B,0x2A,0x2A,0x2A,0x2A,0x2A,0x29,0x2A,0x2A,0x2A,0x2A,0x29,0x2A,
		0x32,0x32,0x2A,0x4F,0x2A,0xE5,0xB6,0x29,0x29,0x2B,0x4F,0x4F,0x2B,0x2A,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x2B,0x2B,0x2B,0x2B,
		0x2A,0x2B,0x4F,0x53,0x53,0x53,0x53,0xB6,0xDB,0xDB,0xB6,0x4F,0x2A,0x32,0x2A,0x2B,
		0x2B,0x2B,0x32,0x2A,0x32,0x32,0x2A,0x2A,0x32,0x5B,0x32,0x2A,0x2A,0x29,0x29,0x29,
		0x32,0x2B,0x53,0x53,0x4F,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x2A,0x2A,0x2A,0x2A,0x2B,0x2B,0x2B,0x4F,0x53,0x53,0x53,0x53,
		0xB6,0xB6,0x53,0x53,0x2A,0x5B,0x2A,0x53,0x53,0x2B,0x32,0x2A,0x32,0x32,0x32,0x2A,
		0x32,0x5B,0x5B,0x2A,0x64,0x64,0x2A,0x32,0x5B,0x5B,0x2B,0xDB,0x4F,0x32,0x2A,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,
		0x2A,0x2A,0x2B,0x2B,0x4F,0x4F,0x53,0x53,0x53,0x53,0x4F,0x2A,0x5B,0x32,0x2A,0xB6,
		0xB6,0x4F,0x5B,0x2A,0x5B,0x5B,0x32,0x2A,0x2A,0x2A,0x2A,0x2B,0x2B,0xF6,0xDB,0x2A,
		0x5B,0x5B,0xDB,0x53,0x4F,0x5B,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,
		0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2B,0x53,0x53,0x2B,0x5B,0x2A,0x5B,0x32,0x2A,0x2B,
		0x2A,0x2B,0x4F,0x4F,0x4F,0x2B,0xDB,0x2A,0x5B,0xDB,0x2B,0x53,0x4F,0x5B,0x2A,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x2B,0x4F,0x4F,
		0x4F,0x2B,0x32,0x2A,0x2A,0x2A,0x53,0x4F,0x2A,0x2B,0x4F,0x53,0xB6,0x4F,0x2B,0x32,
		0xDB,0x2B,0x53,0x4F,0x5B,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x29,0x2A,0x2B,0x2B,0x2B,0x2B,0x2A,0x2A,0x4F,0x53,0x53,0x4F,
		0x2A,0x2B,0x4F,0x53,0x53,0xDB,0x4F,0x2B,0x64,0x64,0x2A,0x5B,0xDB,0x2A,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x29,0x32,0x32,0x2A,0x2A,
		0x2A,0x2A,0x35,0x2A,0x2B,0x4F,0x4F,0x2B,0x2A,0x2A,0x2B,0x4F,0x53,0x53,0x4F,0x2B,
		0x6E,0x6E,0x6E,0x6E,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x29,0x29,0x29,0x29,0x29,0x29,
		0x29,0x29,0x29,0x32,0x32,0x5B,0x32,0x2A,0x35,0x35,0x35,0x35,0x2A,0x2A,0x2A,0x2A,
		0x35,0x2A,0x2A,0x2B,0x4F,0x4F,0x2A,0xB6,0xDB,0xDB,0xDB,0xB6,0x2A,0x2A,0x2A,0x2A,
		0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x29,0x29,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x5B,0x32,0x2A,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x2A,0x2A,0x2A,0xDB,0xDB,
		0xDB,0xB6,0x2A,0x2A,0x2A,0x2B,0x2B,0x2B,0x2B,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x29,0x29,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,
		0x2B,0x4F,0x4F,0x4F,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x2A,0x2A,0xB6,0xDB,0xDB,0xDB,0xB6,0x2A,0x2A,0x2B,0x2B,0x4F,0x4F,
		0x4F,0x2B,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x29,0x29,0x29,0x29,
		0x2A,0x2A,0x2A,0x2A,0x2A,0x2B,0x2B,0x4F,0x53,0x53,0xB6,0xB6,0x2B,0x2A,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x6E,0xB6,0xDB,0xDB,
		0xDB,0xB6,0x2A,0x2B,0x2B,0x4F,0x4F,0x53,0x53,0x4F,0x4F,0x29,0x29,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x29,0x2A,0x2A,0x29,0x2A,0x2A,0x2A,0x2A,0x2B,0x4F,0x53,0x53,
		0x53,0xB6,0xB6,0x4F,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x6E,0xDB,0xDB,0xB6,0xDB,0xDB,0x2A,0x4F,0x4F,0x53,0x53,
		0x53,0x53,0x2B,0x29,0x6E,0x29,0x35,0x35,0x35,0x35,0x35,0x35,0x29,0x2A,0x2A,0x29,
		0x2A,0x2A,0x2B,0x2B,0x4F,0x53,0x53,0x53,0x53,0x53,0x53,0x2A,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x6E,0xDB,
		0xB6,0x6E,0xB6,0xDB,0x4F,0x4F,0x53,0x53,0xDB,0xB6,0x29,0x29,0x64,0x29,0x35,0x35,
		0x35,0x35,0x35,0x35,0x29,0x2A,0x2A,0x2A,0x29,0x2B,0x2B,0x4F,0x53,0x53,0x53,0x53,
		0x53,0x53,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x6E,0xDB,0xB6,0x6E,0xB6,0x4F,0x4F,0x53,0x53,
		0x53,0x53,0x29,0x29,0xE5,0x29,0x35,0x35,0x35,0x35,0x35,0x35,0x29,0x2A,0x2A,0x2B,
		0x2B,0x2A,0x2B,0x4F,0x53,0x53,0x53,0x53,0x4F,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x6E,0x6E,0x6E,0x2A,0x4F,0x4F,0x4F,0x53,0x53,0x4F,0x29,0x29,0x29,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x2A,0x2A,0x2B,0x4F,0x4F,0x2B,0x2A,0x4F,0x53,0x53,0x4F,0x2B,
		0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x2A,0x2B,0x2B,0x4F,0x4F,
		0x4F,0x2B,0x29,0x29,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x2B,0x4F,0x4F,
		0x53,0x4F,0x2A,0x2B,0x4F,0x4F,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x2A,0x4F,0x4F,0x53,0xB6,0x4F,0x2A,0x2B,0x2A,0x2A,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x4F,0x53,0xB6,
		0x53,0x2B,0x2A,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x2A,0x4F,0x53,0x53,0x4F,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x4F,0x4F,0x4F,
		0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x2A,0x2B,0x2B,0x2A,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x2A,0x2A,0x2A,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
		0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,

};

VGA_Image shoot10 = {
		shoot10_Table,
		56,
		39
};

