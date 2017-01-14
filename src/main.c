#include <stdint.h>
#include "bsp/bsp.h"
#include "lib_draw.h"
#include "imagenes/fondo.h"
#include "imagenes/showup.h"
#include "imagenes/standby.h"
#include "imagenes/running.h"
#include "imagenes/jump.h"
#include "imagenes/shoot.h"

void showup(void);
void standby(void);
void running(void);
void jump(void);
void shoot(void);



uint8_t tick, tick1 = 0;
uint8_t x=60 , y=200;
uint8_t x_bullet, y_bullet, bullet_flag= 0;
uint32_t fondo = 0;
states_showup 	st_showup	= st_showup_0;
states_standby 	st_standby 	= st_standby_0;
states_running 	st_running	= st_running_0;
states_jump		st_jump		= st_jump_0;
states_shoot	st_shoot	= st_shoot_0;
states	main_states 		= showup_0;


int main(void) {
	bsp_init();

	while (1) {

		if (fondo++ % 8 > 3) {
			VGA_DrawImage(&fondo1, 0, 0);
		} else {
			VGA_DrawImage(&fondo3, 0, 0);
		}

		switch(main_states)
		{
			case showup_0:
				showup();
			break;

			case standby_1:
			{
				standby();

				if(!get_sw_state(SW_RIGHT))
					main_states = running_2;

				if(!get_sw_state(SW_UP))
					main_states = jump_3;

				if(get_sw_state(SW_DISC))
					main_states = shoot_4;
			}
			break;

			case running_2:
			{
				running();
				if(get_sw_state(SW_DISC))
					main_states = shoot_4;

				if(!get_sw_state(SW_UP))
					main_states = jump_3;

				if(get_sw_state(SW_RIGHT))
					main_states = standby_1;
			}
			break;

			case jump_3:
				jump();

			break;

			case shoot_4:
				shoot();

			break;

		}

		if (bullet_flag==1)
		{
			if(x_bullet <250)
			{
				if(tick1 == 1)
				{
					x_bullet+=3;
					VGA_DrawImageAlpha(&bullet, x_bullet, y_bullet, 0xFC);
				}
			}

			else
				bullet_flag=0;
		}

		tick = 0;
		tick1 = 0;

		bsp_draw();
	}
}



void shoot(void)
{
	switch (st_jump)
	{
		case st_shoot_0:
		{
			VGA_DrawImageAlpha(&shoot1, x, y, 0x35);
			if (tick == 1)
				st_jump=st_shoot_1;
		}
		break;

		case st_shoot_1:
		{
			VGA_DrawImageAlpha(&shoot2, x, y, 0x35);
			if (tick == 1)
				st_jump=st_shoot_2;
		}
		break;

		case st_shoot_2:
		{
			VGA_DrawImageAlpha(&shoot3, x, y, 0x35);
			if (tick == 1)
				st_jump=st_shoot_3;
		}
		break;

		case st_shoot_3:
		{
			VGA_DrawImageAlpha(&shoot4, x, y, 0x35);
			if (tick == 1)
				st_jump=st_shoot_4;
		}
		break;

		case st_shoot_4:
		{
			VGA_DrawImageAlpha(&shoot5, x, y, 0x35);
			if (tick == 1)
				st_jump=st_shoot_5;
		}
		break;

		case st_shoot_5:
		{
			VGA_DrawImageAlpha(&shoot6, x, y, 0x35);
			if (tick == 1)
			{
				bullet_flag = 1;
				x_bullet = x+40;
				y_bullet = y+24;
				st_jump=st_shoot_6;
			}
		}
		break;

		case st_shoot_6:
		{
			VGA_DrawImageAlpha(&shoot7, x, y, 0x35);
			if (tick == 1)
				st_jump=st_shoot_7;
		}
		break;

		case st_shoot_7:
		{
			VGA_DrawImageAlpha(&shoot8, x, y, 0x35);
			if (tick == 1)
				st_jump=st_shoot_8;
		}
		break;

		case st_shoot_8:
		{
			VGA_DrawImageAlpha(&shoot9, x, y, 0x35);
			if (tick == 1)
				st_jump=st_shoot_9;
		}
		break;

		case st_shoot_9:
		{
			VGA_DrawImageAlpha(&shoot10, x, y, 0x35);
			if (tick == 1)
			{
				st_jump=st_shoot_0;
				main_states=st_standby_1;
			}
		}
		break;
	}

	tick = 0;
}

void jump (void)
{
	switch (st_jump)
	{
		case st_jump_0:
		{
			VGA_DrawImageAlpha(&jump1, x, y, 0xFF);
			if (tick == 1)
			{
				st_jump=st_jump_1;
				y+=6;
			}

		}
		break;

		case st_jump_1:
		{
			VGA_DrawImageAlpha(&jump2, x, y, 0xFF);
			if (tick == 1)
			{
				st_jump=st_jump_2;
				y+=6;
			}
		}
		break;

		case st_jump_2:
		{
			VGA_DrawImageAlpha(&jump3, x, y, 0xFF);
			if (tick == 1)
			{
				st_jump=st_jump_3;
				y+=6;
			}
		}
		break;

		case st_jump_3:
		{
			VGA_DrawImageAlpha(&jump4, x, y, 0xFF);
			if (tick == 1)
			{
				st_jump=st_jump_4;
				y+=6;
			}
		}
		break;

		case st_jump_4:
		{
			VGA_DrawImageAlpha(&jump5, x, y, 0xFF);
			if (tick == 1)
				st_jump=st_jump_5;
		}
		break;

		case st_jump_5:
		{
			VGA_DrawImageAlpha(&jump6, x, y, 0xFF);
			if (tick == 1)
			{
				st_jump=st_jump_6;
				y-=6;
			}
		}
		break;

		case st_jump_6:
		{
			VGA_DrawImageAlpha(&jump7, x, y, 0xFF);
			if (tick == 1)
			{
				st_jump=st_jump_7;
				y-=6;
			}
		}
		break;

		case st_jump_7:
		{
			VGA_DrawImageAlpha(&jump8, x, y, 0xFF);
			if (tick == 1)
			{
				st_jump=st_jump_8;
				y-=6;
			}
		}
		break;

		case st_jump_8:
		{
			VGA_DrawImageAlpha(&jump9, x, y, 0xFF);
			if (tick == 1)
			{
				st_jump=st_jump_9;
				y-=6;
			}
		}
		break;

		case st_jump_9:
		{
			VGA_DrawImageAlpha(&jump10, x, y, 0xFF);
			if (tick == 1)
				st_jump=st_jump_10;
		}
		break;

		case st_jump_10:
		{
			VGA_DrawImageAlpha(&jump1, x, y, 0xFF);
			if (tick == 1)
			{
				st_jump=st_jump_0;
				main_states=st_standby_1;
			}
		}
		break;

	}
	tick=0;
}

void running(void)
{
	switch (st_running)
	{
		case st_running_0:
		{
			VGA_DrawImageAlpha(&running1, x, y, 0xFF);
			if (tick == 1)
				st_running=st_running_1;
		}
		break;
		case st_running_1:
		{
			VGA_DrawImageAlpha(&running2, x, y, 0xFF);
			if (tick == 1)
				st_running=st_running_2;
		}
		break;

		case st_running_2:
		{
			VGA_DrawImageAlpha(&running3, x, y, 0xFF);
			if (tick == 1)
				st_running=st_running_3;
		}
		break;

		case st_running_3:
		{
			VGA_DrawImageAlpha(&running4, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_4;
			}

			break;
		}

		case st_running_4:
		{
			VGA_DrawImageAlpha(&running5, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_5;
			}

			break;
		}

		case st_running_5:
		{
			VGA_DrawImageAlpha(&running6, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_6;
			}

			break;
		}

		case st_running_6:
		{
			VGA_DrawImageAlpha(&running7, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_7;
			}

			break;
		}

		case st_running_7:
		{
			VGA_DrawImageAlpha(&running8, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_8;
			}

			break;
		}

		case st_running_8:
		{
			VGA_DrawImageAlpha(&running9, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_9;
			}

			break;
		}

		case st_running_9:
		{
			VGA_DrawImageAlpha(&running10, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_10;
			}

			break;
		}

		case st_running_10:
		{
			VGA_DrawImageAlpha(&running11, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_11;
			}

			break;
		}

		case st_running_11:
		{
			VGA_DrawImageAlpha(&running12, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_12;
			}

			break;
		}

		case st_running_12:
		{
			VGA_DrawImageAlpha(&running13, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_13;
			}

			break;
		}

		case st_running_13:
		{
			VGA_DrawImageAlpha(&running14, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_14;
			}

			break;
		}

		case st_running_14:
		{
			VGA_DrawImageAlpha(&running15, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_15;
			}

			break;
		}

		case st_running_15:
		{
			VGA_DrawImageAlpha(&running16, x, y, 0xFF);
			if (tick == 1)
			{
				if(x < X_Limit)
					x+=2;
				st_running=st_running_2;
			}

			break;
		}

	}
	tick=0;
}

void showup(void)
{
	switch (st_showup)
	{
		case st_showup_0:
		{
			VGA_DrawImageAlpha(&showup1, x+1, y, 0xFF);

			if (tick1 == 1)
				y-=2;

			if (y == Y_Init)
			{
				y-=5;
				x-=5;
				st_showup = st_showup_1;
			}

			break;
		}

		case st_showup_1:
		{
			VGA_DrawImageAlpha(&showup2, x, y, 0xFF);
			if (tick == 1)
			{
				st_showup=st_showup_2;
				y-=19;
				x-=7;
			}

			break;
		}

		case st_showup_2:
		{
			VGA_DrawImageAlpha(&showup3, x, y, 0xFF);
			if (tick == 1)
			{
				x-=12;
				y-=4;
				st_showup=st_showup_3;
			}

			break;
		}

		case st_showup_3:
		{
			VGA_DrawImageAlpha(&showup4, x, y, 0xFF);
			if (tick == 1)
			{
				y-=7;
				st_showup=st_showup_4;
			}
			break;
		}

		case st_showup_4:
		{

			VGA_DrawImageAlpha(&showup5, x, y, 0xFF);
			if (tick == 1)
			{
				x--;
				st_showup=st_showup_5;
			}
			break;
		}

		case st_showup_5:
		{
			VGA_DrawImageAlpha(&showup6, x, y, 0xFF);
			if (tick == 1)
			{
				x--;
				st_showup=st_showup_6;
			}
			break;
		}

		case st_showup_6:
		{
			VGA_DrawImageAlpha(&showup7, x, y, 0xFF);
			if (tick == 1)
			{
				x+=6;
				st_showup=st_showup_7;
			}
			break;
		}

		case st_showup_7:
		{
			VGA_DrawImageAlpha(&showup8, x, y, 0xFF);
			if (tick == 1)
			{
				y+=7;
				x+=7;
				st_showup=st_showup_8;
			}
			break;
		}

		case st_showup_8:
		{
			VGA_DrawImageAlpha(&showup9, x, y, 0xFF);
			if (tick == 1)
			{
				x+=2;
				st_showup=st_showup_9;
			}

			break;
		}

		case st_showup_9:
		{
			VGA_DrawImageAlpha(&showup10, x, y, 0xFF);
			if (tick == 1)
			{
				x++;
				y++;
				st_showup=st_showup_10;
			}
			break;
		}

		case st_showup_10:
		{
			VGA_DrawImageAlpha(&showup11, x, y, 0xFF);
			if (tick == 1)
			{
				x+=2;
				y--;
				st_showup=st_showup_11;
			}
			break;
		}

		case st_showup_11:
		{
			VGA_DrawImageAlpha(&showup12, x, y, 0xFF);
			if (tick == 1)
			{
				x+=5;
				st_showup=st_showup_12;
			}
			break;
		}

		case st_showup_12:
		{
			VGA_DrawImageAlpha(&showup13, x, y, 0xFF);
			if (tick == 1)
			{
				x--;
				y-=3;
				st_showup=st_showup_13;
			}
			break;
		}

		case st_showup_13:
		{
			VGA_DrawImageAlpha(&showup14, x, y, 0xFF);
			if (tick == 1)
			{
				x-=27;
				y+=3;
				st_showup=st_showup_14;
			}
			break;
		}

		case st_showup_14:
		{
			VGA_DrawImageAlpha(&showup15, x, y, 0xFF);
			if (tick == 1)
			{
				x+=11;
				y+=2;
				st_showup=st_showup_15;
			}
			break;
		}

		case st_showup_15:
		{
			VGA_DrawImageAlpha(&showup16, x, y, 0xFF);
			if (tick == 1)
			{
				x+=6;
				y-=3;
				st_showup=st_showup_16;
			}
			break;
		}

		case st_showup_16:
		{
			VGA_DrawImageAlpha(&showup17, x, y, 0xFF);
			if (tick == 1)
				main_states=standby_1;
			break;
		}
	}

	tick = 0;
	tick1=0;
}

void standby(void)
{
	switch(st_standby)
	{
		case st_standby_0:
		{
			VGA_DrawImageAlpha(&standby1, x, y, 0xFF);
			if (tick == 1)
				st_standby=st_standby_1;
			break;
		}

		case st_standby_1:
		{
			VGA_DrawImageAlpha(&standby2, x, y, 0xFF);
			if (tick == 1)
				st_standby=st_standby_2;
			break;
		}

		case st_standby_2:
		{
			VGA_DrawImageAlpha(&standby3, x, y, 0xFF);
			if (tick == 1)
				st_standby=st_standby_3;
			break;
		}

		case st_standby_3:
		{
			VGA_DrawImageAlpha(&standby4, x, y, 0xFF);
			if (tick == 1)
				st_standby=st_standby_4;
			break;
		}

		case st_standby_4:
		{
			VGA_DrawImageAlpha(&standby5, x, y, 0xFF);
			if (tick == 1)
				st_standby=st_standby_1;
			break;
		}
	}

	if(x > X_Init)
		if (tick==1)
			x--;

	tick = 0;

}
