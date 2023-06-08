#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: The unsigned long int to print in binary
 *
 * Return: Void
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int r;
	unsigned long int count;

	r = count = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		r = r << 1;
		r += n & 1;
		count++;
		n = n >> 1;
	}
	while (r > 0)
	{
		_putchar((r & 1) + '0');
		r = r >> 1;
		count--;
	}
	if (count > 0)
	{
		while (count != 0)
		{
			_putchar('0');
			count--;
		}
	}
}
