#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @n: The unsigned long int to print in binary
 * @index: The index at which to set the value to 1
 *
 * Return: 1 if it succeeds, -1 if it fails
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r;
	unsigned long int num;
	unsigned long int count;
	unsigned long int old;

	r = count = num = 0;
	old = *n;
	if (index > 63)
		return (-1);
	while (count < 63)
	{
		r = r << 1;
		if (count == index)
			r += 1;
		else
			r += old & 1;
		count++;
		old = old >> 1;
	}
	while (count > 0)
	{
		num = num << 1;
		num += r & 1;
		r = r >> 1;
		count--;
	}
	*n = num;
	return (1);
}
