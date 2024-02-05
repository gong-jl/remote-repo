#include "board.h"

void gpio_high(gpio_type *gpio_x, uint16_t pins)
{
	gpio_bits_set(gpio_x,pins)

}

void gpio_low(gpio_type *gpio_x, uint16_t pins)
{
	gpio_bits_reset(gpio_x,pins)

}

void gpio_init(void)
{
	gpio_init_type gpio_init_struct;
	
	  /* enable the gpioa clock */
	  crm_periph_clock_enable(CRM_GPIOA_PERIPH_CLOCK, TRUE);
	
	  /* set default parameter */
	  gpio_default_para_init(&gpio_init_struct);
	
	  /* configure the gpio 3 */
	  gpio_init_struct.gpio_drive_strength = GPIO_DRIVE_STRENGTH_STRONGER;
	  gpio_init_struct.gpio_out_type  = GPIO_OUTPUT_PUSH_PULL;
	  gpio_init_struct.gpio_mode = GPIO_MODE_OUTPUT;
	  gpio_init_struct.gpio_pins = GPIO_PINS_3;
	  gpio_init_struct.gpio_pull = GPIO_PULL_NONE;
	  gpio_init(GPIOB, &gpio_init_struct);

	  /* configure the gpio 4 */
		   gpio_init_struct.gpio_drive_strength = GPIO_DRIVE_STRENGTH_STRONGER;
		   gpio_init_struct.gpio_out_type  = GPIO_OUTPUT_PUSH_PULL;
		   gpio_init_struct.gpio_mode = GPIO_MODE_OUTPUT;
		   gpio_init_struct.gpio_pins = GPIO_PINS_4;
		   gpio_init_struct.gpio_pull = GPIO_PULL_NONE;
		   gpio_init(GPIOB, &gpio_init_struct);

	  /* configure the gpio 5 */
		   gpio_init_struct.gpio_drive_strength = GPIO_DRIVE_STRENGTH_STRONGER;
		   gpio_init_struct.gpio_out_type	= GPIO_OUTPUT_PUSH_PULL;
		   gpio_init_struct.gpio_mode = GPIO_MODE_OUTPUT;
		   gpio_init_struct.gpio_pins = GPIO_PINS_5;
		   gpio_init_struct.gpio_pull = GPIO_PULL_NONE;
		   gpio_init(GPIOB, &gpio_init_struct);




}

void led_r_on(void)
{
    gpio_high(GPIOB,GPIO_PINS_3);
}
void led_r_off(void)
{
	gpio_low(GPIOB,GPIO_PINS_3);

}
void led_g_on(void)
{
	gpio_high(GPIOB,GPIO_PINS_4);

}
void led_g_off(void)
{
	gpio_low(GPIOB,GPIO_PINS_4);

}
void led_b_on(void)
{
	gpio_high(GPIOB,GPIO_PINS_5);

}
void led_b_off(void)
{
	gpio_low(GPIOB,GPIO_PINS_5);

}




