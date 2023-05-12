#include "main.h"

/**
 *  _atoi - a function that convert a string to an integer.
 *
 *  @s: char
 *
 *  Return: always 0
 *
 */

int _atoi(char *s)
{
	unsigned int n;
	int i;

	n = 0;
	i = 1;

	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * i);
}
