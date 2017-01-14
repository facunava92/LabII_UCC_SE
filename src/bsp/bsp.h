#ifndef _BSP_H
#define _BSP_H

#define X_Limit 240
#define Y_Init 	72
#define X_Init	40


typedef enum{
	SW_RIGHT=0, SW_LEFT=1, SW_UP=2, SW_DOWN=3, SW_DISC=4
}SW_typedef;

typedef enum {
	st_showup_0=0,st_showup_1,st_showup_2,st_showup_3,st_showup_4,st_showup_5,st_showup_6,st_showup_7,
	st_showup_8,st_showup_9,st_showup_10,st_showup_11,st_showup_12,st_showup_13,st_showup_14,st_showup_15,st_showup_16
}states_showup;

typedef enum {
	st_standby_0=0,st_standby_1,st_standby_2,st_standby_3,st_standby_4
}states_standby;

typedef enum {
	st_running_0=0,st_running_1,st_running_2,st_running_3,st_running_4,st_running_5,st_running_6,st_running_7,st_running_8,
	st_running_9,st_running_10,st_running_11,st_running_12,st_running_13,st_running_14,st_running_15
}states_running;

typedef enum {
	st_jump_0=0,st_jump_1,st_jump_2,st_jump_3,st_jump_4,st_jump_5,st_jump_6,st_jump_7,
	st_jump_8,st_jump_9,st_jump_10
}states_jump;

typedef enum {
	st_shoot_0=0,st_shoot_1,st_shoot_2,st_shoot_3,st_shoot_4,st_shoot_5,st_shoot_6,st_shoot_7,
	st_shoot_8,st_shoot_9
}states_shoot;

typedef enum {
	showup_0=0,standby_1, running_2, jump_3, shoot_4
}states;


void bsp_init(void);

void led_on(uint8_t led);
void led_off(uint8_t led);
void led_toggle(uint8_t led);

uint8_t get_sw_state(SW_typedef sw);

uint16_t adc_get(void);

void bsp_FillScreen(uint8_t color);
void bsp_SetPixel(uint16_t xp, uint16_t yp, uint8_t color);
void bsp_draw(void);


#endif
