#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day
 */
void jack_bauer(void)
{
	int min;
	int hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hr + '0');
			_putchar(':');
			_putchar(min + '0');
			_putchar('\n');
		}
	}
}