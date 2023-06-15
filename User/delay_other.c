#include "delay_other.h"

static __IO uint32_t delay_us_count = 0;

void delay_init(void)
{
    SysTick_Config(SystemCoreClock / 1000); // ??SysTick????1????
}

static void SysTick_Handler(void)
{
    if (delay_us_count != 0)
    {
        delay_us_count--;
    }
}

void delay_ms(uint32_t ms)
{
    uint32_t i;
    for (i = 0; i < ms; i++)
    {
        delay_us(1000);
    }
}

void delay_us(uint32_t us)
{
    delay_us_count = us;
    while (delay_us_count != 0)
    {
    }
}
