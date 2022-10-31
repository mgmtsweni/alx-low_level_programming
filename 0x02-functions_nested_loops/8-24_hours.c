#include "main.h"
/**
* jack_bauer - Entry point
* Description: prints every minute of the day of Jack Bauer
* Return: Always 0.
*/
void jack_bauer(void)
{
	int hr;
	int min;

	hr = 0;
	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
