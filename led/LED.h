#ifndef"__LED.H_"
#define"__LED.H_"

#define LED 29

#define LED_IODIR       (*(unit32-t*)0x2009C020)
#define LED_IOCLR       (*(unit32-t*)0x2009C020)
#define LED_IOSET       (*(unit32-t*)0x2009C020)

void led_init(void);
void led_on(void);
void led_off(void);
void led_blink(uint32_t delay_ms);

#endif

