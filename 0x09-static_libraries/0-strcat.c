#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int c = 0, c2 = 0;

	while (dest[c])
	{
		c++;
	}

	for (c2 = 0; src[c2]; c2++)
	{
		dest[c] = src[c2];
		c++;
	}
	return (dest);
}
