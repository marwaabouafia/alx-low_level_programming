#include "main.h"

/**
 * _sqrt_recursion - unction that returns the natural square root of a number.
 * _my_sqrt - returns the natural square root of a number
 *
 * @n: int
 * @root: root
 *
 * Return: square root
 *
 */
int _my_sqrt(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (_my_sqrt(n, ++root));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_my_sqrt(n, 1));
}
