#include "main.h"

/**
 * is_prime - checks if number if prime
 * @n: number
 * @i: trial factors
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime(int n, int i)
{
	if (i >= n)
		return (0);
	if ((i < n) && (n % i) == 0)
		return (0);
	if ((n / 2) == i)
		return (1);
	return (is_prime(n, ++i));
}

/**
 * is_prime_number - checks for prime number
 * @n: number to check
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_prime(n, 2));
}
