#include "main.h"

/**
 * _abs -  a function that computes the absolute value of an integer
 *
 * @n: a number to check
 *
 * Return: the abs
 *
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
