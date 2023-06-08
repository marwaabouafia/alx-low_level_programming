#include "main.h"

/**
 * binary_to_uint -  function that converts
 * a binary number to an unsigned int
 *
 * @b: The string
 *
 * Return: 0 if string contains something other than 1 or 0, or
 * if the string is NULL, return the decimal value on success
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, l;
	unsigned int d;

	i = l = d = 0;
	if (b == NULL)
		return (0);
	while (b[l] != '\0')
	{
		if (b[l] == '0' || b[l] == '1')
			l++;
		else
			return (0);
	}
	while (i < l)
	{
		d = d << 1;
		if (b[i] == '1')
			d += 1;
		i++;
	}
	return (d);
}
