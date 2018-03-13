#include"LPC17xx.h"
#include"LED.h"

void led_init(void)
{
    LED_IODIR |= BV(LED);
    led_off();
}

void led_on(void)
{
    LED_IOSET |= BV(LED);
}

void led_off(void)
{
    LED_IOCLR = BV(LED);
}

void led_blink(void)
{
    int i = 0;

    for(i=0;i<5;i++)
    {
        led_on();
            SW_DELAY_MS(100);
        led_off();
            SW_DELAY_MS(100);
        led_on();
            SW_DELAY_MS(100);
        led_off();
            SW_DELAY_MS(800);
        led_on();
            SW_DELAY_MS(100);
        led_off();
            SW_DELAY_MS(100);
        led_on();
            SW_DELAY_MS(100);
        led_off();
    }
}
