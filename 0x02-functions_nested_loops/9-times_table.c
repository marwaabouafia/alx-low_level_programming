#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			p = i * j;

			if (p < 10)
			{
				_putchar(' ');
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
