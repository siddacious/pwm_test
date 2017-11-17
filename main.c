#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	/*
	// EXAMLE FROM FORUM
	_pm_enable_bus_clock(PM_BUS_APBC, TC4);
    _gclk_enable_channel(TC4_GCLK_ID, CONF_GCLK_TC4_SRC);
    gpio_set_pin_function(P_LED_G, PINMUX_PB08E_TC4_WO0);

    pwm_init(&PWM_1, TC4, _tc_get_pwm());

    pwm_set_parameters(&PWM_1, 10000, 5000);
    pwm_enable(&PWM_1);
	 */
    /*

	_pm_enable_bus_clock(PM_BUS_APBC, TC4);
	_gclk_enable_channel(TC4_GCLK_ID, CONF_GCLK_TC4_SRC);
	gpio_set_pin_function(P_LED_G, PINMUX_PB09E_TC4_WO1);

	pwm_init(&PWM_1, TC4, _tc_get_pwm());
	*/
	pwm_set_parameters(&PWM_1, 10000, 5000);
	pwm_enable(&PWM_1);
	/* Replace with your application code */
	while (1) {
	}
}
