/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <peripheral_clk_config.h>
#include <utils.h>
#include <hal_init.h>
#include <hpl_gclk_base.h>
#include <hpl_pm_base.h>

struct pwm_descriptor PWM_0;

struct pwm_descriptor PWM_1;

struct pwm_descriptor PWM_2;

void PWM_0_PORT_init(void)
{
}

void PWM_0_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, TC3);
	_gclk_enable_channel(TC3_GCLK_ID, CONF_GCLK_TC3_SRC);
}

void PWM_0_init(void)
{
	PWM_0_CLOCK_init();
	PWM_0_PORT_init();
	pwm_init(&PWM_0, TC3, _tc_get_pwm());
}

void PWM_1_PORT_init(void)
{

	gpio_set_pin_function(P_LED_G, PINMUX_PB09E_TC4_WO1);
}

void PWM_1_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, TC4);
	_gclk_enable_channel(TC4_GCLK_ID, CONF_GCLK_TC4_SRC);
}

void PWM_1_init(void)
{
	PWM_1_CLOCK_init();
	PWM_1_PORT_init();
	pwm_init(&PWM_1, TC4, _tc_get_pwm());
}

void PWM_2_PORT_init(void)
{
}

void PWM_2_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, TC5);
	_gclk_enable_channel(TC5_GCLK_ID, CONF_GCLK_TC5_SRC);
}

void PWM_2_init(void)
{
	PWM_2_CLOCK_init();
	PWM_2_PORT_init();
	pwm_init(&PWM_2, TC5, _tc_get_pwm());
}


void system_init(void)
{
	init_mcu();
//	gpio_set_pin_direction(LED0, GPIO_DIRECTION_OUT);
//
//	gpio_set_pin_level(LED0,
//			// <y> Initial level
//			// <id> pad_initial_level
//			// <false"> Low
//			// <true"> High
//					   false);
//
//	gpio_set_pin_function(LED0, GPIO_PIN_FUNCTION_OFF);
	//delay_init(SysTick);

	//PWM_0_init();

	//PWM_1_init();

	//PWM_2_init();
}
