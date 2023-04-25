#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j < 10; j++)
		{
			int p;

			p = i * j;

			if (p < 10)
			{
				_putchar((p % 10) + '0');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
