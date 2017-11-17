/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_examples.h"
#include "driver_init.h"
#include "utils.h"

/**
 * Example of using PWM_0.
 */
void PWM_0_example(void)
{
	pwm_set_parameters(&PWM_0, 10000, 5000);
	pwm_enable(&PWM_0);
}

/**
 * Example of using PWM_1.
 */
void PWM_1_example(void)
{
	pwm_set_parameters(&PWM_1, 10000, 5000);
	pwm_enable(&PWM_1);
}

/**
 * Example of using PWM_2.
 */
void PWM_2_example(void)
{
	pwm_set_parameters(&PWM_2, 10000, 5000);
	pwm_enable(&PWM_2);
}
