#include "main.h"

/**
 * _sqrt_recursion - unction that returns the natural square root of a number.
 *
 * @n: int
 *
 * Return: square root
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_my_sqrt(n, 1));
}
