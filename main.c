#include <atmel_start.h>
#include <hpl_pm_base.h>
#include <hpl_gclk_base.h>
#include <hal_delay.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	gpio_set_pin_function(PIN_PA21, GPIO_PIN_FUNCTION_F); // D7
	_pm_enable_bus_clock(PM_BUS_APBC, TCC0);
	_gclk_enable_channel(TCC0_GCLK_ID, GCLK_CLKCTRL_GEN_GCLK0_Val);
	TCC0->WAVE.bit.WAVEGEN = TCC_WAVE_WAVEGEN_NPWM_Val;
	TCC0->CTRLA.bit.ENABLE = true;
	TCC0->PER.bit.PER = 199;
	while (TCC0->SYNCBUSY.bit.ENABLE == 1) {}
	TCC0->CC[3].bit.CC = 10;
	while (TCC0->SYNCBUSY.bit.CC0 == 1) {}
	TCC0->CTRLBSET.bit.CMD = 0x1;
	delay_init(SysTick);
	// adding this back seems to override the above, likely messing with the clocks
	//	atmel_start_init(); //eventually _init_chip(); after indirection
	while (1) {
//        delay_ms(1000);
//		TCC0->CTRLA.bit.ENABLE = false;
//		while (TCC0->SYNCBUSY.bit.ENABLE == 1) {}
//		TCC0->WAVE.bit.WAVEGEN = TCC_WAVE_WAVEGEN_NPWM_Val;
//		TCC0->CTRLA.bit.ENABLE = true;
//		TCC0->PER.bit.PER = 199;
//		while (TCC0->SYNCBUSY.bit.ENABLE == 1) {}
//		TCC0->CC[3].bit.CC = 199;
//		while (TCC0->SYNCBUSY.bit.CC0 == 1) {}
//		TCC0->CTRLBSET.bit.CMD = 0x1;
		delay_ms(50);
		TCC0->CC[3].bit.CC = 0;
		while (TCC0->SYNCBUSY.bit.CC0 == 1) {}
		delay_ms(50);
		TCC0->CC[3].bit.CC = 199;
		while (TCC0->SYNCBUSY.bit.CC0 == 1) {}
		delay_ms(50);
		TCC0->CC[3].bit.CC = 0;
		while (TCC0->SYNCBUSY.bit.CC0 == 1) {}
		delay_ms(50);
		TCC0->CC[3].bit.CC = 199;
		while (TCC0->SYNCBUSY.bit.CC0 == 1) {}
	}
}
