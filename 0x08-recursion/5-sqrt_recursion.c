#include "main.h"

/**
 * _my_sqrt - returns the natural square root of a number
 *
 * @root: root
 * @n: int
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
