
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			op = ((int)*s1 - '0') - ((int)*s2 - '0');
			break;
		}
		s1++;
		s2++;
	}

	return (op);
}
