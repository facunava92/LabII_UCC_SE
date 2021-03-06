#include "lib_draw.h"


const uint8_t jump5_Table[] = {
		0x00,0x3C,0x00,0x21,
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
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x4D,0x4D,0x4D,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0x25,0x25,0x25,0x92,0xBB,0xBB,0x92,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x2A,0x4D,0x92,0xBB,
		0xBB,0x4D,0xBB,0x4D,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x24,0x25,0x25,0x2A,
		0x2A,0x2A,0x2A,0x25,0x24,0x24,0x24,0x24,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x2A,0x2A,0x92,0x92,0xBB,0xBB,0x92,0x4D,0x92,
		0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x24,0x25,0x25,0x2A,0x2A,0x2F,0x2F,0x2A,
		0x2A,0x24,0x25,0x25,0x24,0x24,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x25,0x2A,0x2A,0x2A,0x92,0x92,0xBB,0xBB,0xBB,0x4D,0xBB,0x4D,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x24,0x25,0x25,0x25,0x2A,0x2A,0x2A,0x25,0x24,0x25,0x2A,0x2A,
		0x2A,0x25,0x24,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x2A,0x2A,0x2F,
		0x2F,0x92,0x92,0x92,0xBB,0xBB,0x4D,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x24,0x25,0x25,0x25,0x2A,0x2A,0x24,0x25,0x2A,0x2A,0x2F,0x2F,0x2F,0x2A,0x24,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x24,0x24,0x24,0x29,0x25,0x2A,0x2F,0x33,0x33,0x4D,0x92,0x4D,
		0x92,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x24,0x25,0x25,
		0x25,0x25,0x25,0x24,0x25,0x2A,0x2A,0x2F,0x2F,0x2F,0x2F,0x2A,0x24,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x24,
		0x25,0x25,0x29,0x11,0x25,0x2F,0x33,0x92,0x92,0x33,0x4D,0x4D,0x4D,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x24,0x25,0x25,0x25,0x24,0x25,
		0x25,0x2A,0x2A,0x2A,0x2F,0x2F,0x2F,0x2F,0x25,0x24,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x24,0x24,0x25,0x2A,0x29,0x11,0x3A,
		0x25,0x2A,0x2F,0x33,0x33,0x2A,0x25,0x25,0x29,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x24,0x25,0x25,0x24,0x25,0x25,0x25,0x2A,0x2A,
		0x2A,0x2F,0x2F,0x2F,0x2A,0x24,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x24,0x29,0x24,0x2A,0x24,0x3A,0x3A,0x3A,0x29,0x25,0x25,0x25,
		0x25,0x25,0x2A,0x2A,0x25,0x29,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x24,0x24,0x24,0x25,0x25,0x25,0x25,0x2A,0x2A,0x2A,0x2F,0x2F,
		0x2A,0x25,0x24,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x24,
		0x29,0x29,0x24,0x2A,0x24,0x11,0x11,0x29,0x2A,0x25,0x92,0x24,0x24,0x11,0x2A,0x2A,
		0x2A,0x29,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x24,0x24,0x25,0x25,0x25,0x25,0x25,0x25,0x24,0x24,0x24,0x24,0x24,0x24,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0x24,0x25,0x25,0x25,0xFF,0x24,0x29,0x29,0x11,0x29,0x25,
		0x2F,0x24,0x29,0x2A,0x33,0x25,0x24,0x24,0x11,0x3A,0x11,0x2F,0x2A,0x11,0x29,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x24,
		0x25,0x25,0x25,0x25,0x24,0x25,0x2A,0x24,0x25,0x25,0x24,0x24,0xFF,0xFF,0xFF,0xFF,
		0x24,0x25,0x2A,0x2A,0x2A,0x25,0x29,0x29,0x11,0x3A,0x3A,0x29,0x25,0x2F,0x33,0x33,
		0x25,0x64,0x64,0x64,0x64,0x11,0x3A,0x11,0x2F,0x11,0x29,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x24,0x25,0x25,0x24,
		0x25,0x2A,0x24,0x25,0x25,0x25,0x25,0x24,0x29,0x29,0x29,0x24,0x25,0x2A,0x2A,0x2F,
		0x2F,0x2A,0x11,0x29,0x11,0x3A,0x3A,0x11,0x29,0x25,0x25,0x25,0xCD,0xD6,0xD6,0xD6,
		0xBB,0x24,0x3A,0x3A,0x2F,0x3A,0x29,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x24,0x24,0x25,0x2A,0x24,0x2A,0x2A,
		0x2A,0x2A,0x2A,0x25,0x24,0x11,0x11,0x24,0x25,0x2A,0x2F,0x2F,0x2F,0x2A,0x3A,0x11,
		0x29,0x3A,0xBB,0x29,0x2F,0x2F,0x25,0xCD,0xD6,0xD6,0xD6,0xBB,0xBB,0x24,0x3A,0x2F,
		0x2A,0x3A,0x29,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0x24,0x2A,0x2A,0x2A,0x24,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,
		0x25,0x24,0x11,0x24,0x29,0x11,0x29,0x33,0x33,0x2F,0x3A,0x3A,0x29,0xBB,0x29,0x2F,
		0x2F,0x33,0x25,0xD6,0xE4,0x64,0xD6,0x24,0x24,0x11,0x3A,0x2A,0x3A,0x29,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0x24,0x2F,0x2F,0x2F,0x2F,0x2A,0x25,0x2F,0x2F,0x2F,0x2F,0x2F,0x2A,0x2A,0x24,0x29,
		0x11,0x3A,0x3A,0x29,0x2F,0x2A,0x3A,0x3A,0x29,0x29,0x2F,0x33,0x33,0x92,0x25,0x64,
		0xE4,0x64,0xD6,0xCD,0x29,0x3A,0x64,0xE4,0x3A,0x29,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x2F,0x33,0x33,0x33,
		0x2F,0x2F,0x25,0x2F,0x33,0x33,0x33,0x33,0x33,0x2F,0x2A,0x24,0x11,0x3A,0x3A,0x29,
		0x2A,0x2A,0x11,0x11,0x25,0x2F,0x33,0x92,0x92,0x2F,0x25,0x29,0x64,0xD6,0xD6,0x29,
		0x11,0x64,0xE4,0xBB,0x29,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x2F,0x33,0x33,0x33,0x33,0x33,0x2F,0x25,0x33,
		0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x2F,0x24,0x11,0x3A,0x29,0x25,0x25,0x29,0x29,
		0x25,0x2A,0x33,0x2F,0x2F,0x25,0x11,0x11,0x29,0x64,0x64,0x29,0x64,0xE4,0xE4,0x64,
		0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x25,0x2A,0x33,0x33,0x92,0xBB,0xBB,0x92,0x2F,0x25,0x33,0x33,0x33,0x33,0x33,
		0x33,0x33,0x33,0x33,0x2F,0x25,0x29,0x29,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x25,0x25,
		0x25,0x11,0x3A,0x3A,0x11,0x29,0x25,0x25,0x64,0x64,0x64,0x92,0x4D,0x4D,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x2A,0x33,
		0x33,0x33,0x92,0x92,0x2F,0x2A,0x25,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x92,
		0x92,0x92,0x33,0x25,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x29,0x11,0x3A,
		0x29,0x25,0x2A,0x2A,0x25,0x25,0x92,0x92,0x92,0x4D,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x25,0x25,0x25,0x25,0x25,
		0x25,0x25,0x2F,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x92,0xBB,0x92,0x33,0x2A,0x25,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x29,0x29,0x2F,0x2F,0x2F,0x2F,
		0x2A,0x2A,0x4D,0x4D,0x92,0x4D,0x92,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x25,
		0x2A,0x2F,0x33,0x33,0x33,0x33,0x33,0x2F,0x2A,0x25,0x25,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x2A,0x2F,0x33,0x33,0x2A,0x4D,0x24,0x4D,
		0x92,0x4D,0x92,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x25,0x25,0x25,0x25,
		0x25,0x25,0x25,0x25,0x25,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x25,0x25,0x2A,0x2F,0x25,0x92,0x4D,0x24,0x4D,0x92,0x4D,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0x25,0x25,0x4D,0x4D,0x24,0x92,0x4D,0x92,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x4D,0x4D,0x92,0x92,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x4D,0x4D,
		0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
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
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,

};

VGA_Image jump5 = {
		jump5_Table,
		60,
		33
};
