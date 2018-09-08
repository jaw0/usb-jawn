/*
  Copyright (c) 2015
  Author: Jeff Weisberg <jaw @ tcp4me.com>
  Created: 2015-Oct-06 00:34 (EDT)
  Function: board hardware config

*/

#define I2CUNIT			0

#define HWCF_GPIO_AUDIO		GPIO_B11
#define HWCF_TIMER_AUDIO	TIMER_2_4

#define HWCF_GPIO_BUTTON	GPIO_C13

#define HWCF_GPIO_CARDDET	GPIO_A14

#define HWCF_GPIO_LED_1B	GPIO_B0
#define HWCF_GPIO_LED_1R	GPIO_C6
#define HWCF_GPIO_LED_1G	GPIO_C7
#define HWCF_GPIO_LED_2B	GPIO_A8
#define HWCF_GPIO_LED_2G	GPIO_A9
#define HWCF_GPIO_LED_2R	GPIO_A10

#define HWCF_TIMER_LED_1B	TIMER_3_3
#define HWCF_TIMER_LED_1R	TIMER_3_2
#define HWCF_TIMER_LED_1G	TIMER_3_1
#define HWCF_TIMER_LED_2B	TIMER_1_1
#define HWCF_TIMER_LED_2G	TIMER_1_2
#define HWCF_TIMER_LED_2R	TIMER_1_3
