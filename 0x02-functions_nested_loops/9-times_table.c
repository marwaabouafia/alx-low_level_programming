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
		for (j = 0; j < 10; j++)
		{
			int p;

			p = i * j;
			_putchar(p);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}
