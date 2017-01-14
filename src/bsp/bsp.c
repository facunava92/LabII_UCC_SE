#include <stdint.h>
#include "stm32f4xx.h"
#include "lib_vga.h"
#include "bsp.h"

void bsp_adc_init(void);
void bsp_sw_init(void);
extern uint8_t tick, tick1;

void bsp_init() {
	SystemInit();
	bsp_adc_init();
	VGA_Screen_Init();
	bsp_sw_init();
	bsp_timer3_init();
	bsp_timer5_init();
}

uint16_t SW_PIN[] = { GPIO_Pin_2, GPIO_Pin_5, GPIO_Pin_4, GPIO_Pin_6, GPIO_Pin_0 };

GPIO_TypeDef* SW_PORT[] ={GPIOE, GPIOE, GPIOE, GPIOE, GPIOA };

uint16_t adc_get(void) {
	ADC_RegularChannelConfig(ADC1, 12, 1, ADC_SampleTime_15Cycles);
	ADC_SoftwareStartConv(ADC1);

	while (ADC_GetFlagStatus(ADC1, ADC_FLAG_EOC) != SET)
		;

	return ADC_GetConversionValue(ADC1);
}

uint8_t get_sw_state(SW_typedef sw) {

	return GPIO_ReadInputDataBit(SW_PORT[sw], SW_PIN[sw]);

}

void bsp_FillScreen(uint8_t color) {
	VGA_FillScreen(color);
}

inline void bsp_SetPixel(uint16_t xp, uint16_t yp, uint8_t color) {
	VGA_SetPixel(xp, yp, color);
}

void bsp_draw(void) {
	change_buffer();
}

void bsp_adc_init(void) {
	GPIO_InitTypeDef GPIO_InitStruct;
	ADC_CommonInitTypeDef ADC_CommonInitStruct;
	ADC_InitTypeDef ADC1_InitStruct;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE);
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);

	GPIO_StructInit(&GPIO_InitStruct);
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_2;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AIN;
	GPIO_Init(GPIOC, &GPIO_InitStruct);

	ADC_CommonStructInit(&ADC_CommonInitStruct);
	ADC_CommonInitStruct.ADC_Prescaler = ADC_Prescaler_Div4;
	ADC_CommonInit(&ADC_CommonInitStruct);


	ADC_StructInit(&ADC1_InitStruct);
	ADC1_InitStruct.ADC_Resolution = ADC_Resolution_12b;
	ADC_Init(ADC1, &ADC1_InitStruct);
	ADC_Cmd(ADC1, ENABLE);
}

void bsp_sw_init(void) {
	GPIO_InitTypeDef GPIO_InitStruct;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);

	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_0;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_DOWN;
	GPIO_Init(GPIOA, &GPIO_InitStruct);

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);

	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_2 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOE, &GPIO_InitStruct);

}

void bsp_timer3_init(void) {

	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;

	// Clock enable
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);

	// Timer3 init
	TIM_TimeBaseStructure.TIM_Period = 300-1;
	TIM_TimeBaseStructure.TIM_Prescaler = 42000-1;
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;
	TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure);

	TIM_Cmd(TIM3, ENABLE);
	TIM_ARRPreloadConfig(TIM3, ENABLE);

	NVIC_InitTypeDef NVIC_InitStructure;

	TIM_ITConfig(TIM3, TIM_IT_Update, ENABLE);

	// NVIC config
	NVIC_InitStructure.NVIC_IRQChannel = TIM3_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);
}

void bsp_timer5_init(void) {

	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;

	// Clock enable
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5, ENABLE);

	// Timer3 init
	TIM_TimeBaseStructure.TIM_Period = 1000-1;
	TIM_TimeBaseStructure.TIM_Prescaler = 84-1;
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;
	TIM_TimeBaseInit(TIM5, &TIM_TimeBaseStructure);

	TIM_Cmd(TIM5, ENABLE);
	TIM_ARRPreloadConfig(TIM5, ENABLE);

	NVIC_InitTypeDef NVIC_InitStructure;

	TIM_ITConfig(TIM5, TIM_IT_Update, ENABLE);

	// NVIC config
	NVIC_InitStructure.NVIC_IRQChannel = TIM5_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);
}

void TIM3_IRQHandler(void)
{
    if (TIM_GetITStatus(TIM3, TIM_IT_Update) != RESET)
    {
    	tick = 1;
    	TIM_ClearITPendingBit(TIM3, TIM_IT_Update);


    }
}

void TIM5_IRQHandler(void)
{
    if (TIM_GetITStatus(TIM5, TIM_IT_Update) != RESET)
    {
    	tick1 = 1;
    	TIM_ClearITPendingBit(TIM5, TIM_IT_Update);


    }
}
