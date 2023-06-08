#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 *
 * @n: First number to check bits
 * @m: Second number to check bits
 *
 * Return: Number of bits needed to flip
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nl, ml, flip, storen, storem;

	nl = ml = flip = 0;
	storen = n;
	storem = m;
	while (n > 0)
	{
		n = n >> 1;
		nl++;
	}
	while (m > 0)
	{
		m = m >> 1;
		ml++;
	}
	m = storem;
	n = storen;
	if (ml > nl)
	{
		while (ml > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			ml--;
		}
	}
	else
	{
		while (nl > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			nl--;
		}
	}
	return (flip);
}
