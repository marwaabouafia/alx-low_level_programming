#include "main.h"

/**
 * print_times_table - a function that prints the n times table
 *
 * @n:number
 *
 */

void print_times_table(int n)
{
	int i, j, p;

	if (n < 16 && n > -1)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				p = i * j;
				if (p < 10)
				{
					_putchar(' ');
				}
				if (p < 100)
				{
					_putchar(' ');
				}
				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar((p / 10) % 10 + '0');
				}
				else if (p < 100 && p > 9)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
