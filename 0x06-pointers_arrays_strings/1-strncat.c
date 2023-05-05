#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0, c2;

	while (dest[c])
	{
		c++;
	}

	for (c2 = 0; c2 < n && scr[c2] != '\0'; c2++)
	{
		dest[c + c2] = src[c2];
	}

	dest[c + c2] = '\0';

	return (dest);
}
