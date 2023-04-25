#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n: input number
 *
 * Return: the value of the last digit
 *
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;
	_putchart(ld + '0');
	return (ld);
}
