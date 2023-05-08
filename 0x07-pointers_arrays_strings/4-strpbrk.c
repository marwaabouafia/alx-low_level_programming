#include "main.h"

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: pointer to the byte
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = (s + i);
				return (p);
			}
		}
	}
	return (p);
}
