#include "3-calc.h"

/**
 * op_add -  returns the sum of a and b
 *
 * @a: input integer a
 * @b: input integer b
 *
 * Return: sum
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 *
 * @a: input integer a
 * @b: input integer b
 *
 * Return: difference
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 *
 * @a: input integer a
 * @b: input integer b
 *
 * Return: product
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 *
 * @a: input integer a
 * @b: input integer b
 *
 * Return: quotient
 *
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - returns the remainder of the division of a by b
 *
 * @a: input integer a
 * @b: input integer b
 *
 * Return: remainder
 *
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
