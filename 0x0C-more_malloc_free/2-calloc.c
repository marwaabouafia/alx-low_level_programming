#include "main.h"

/**
 * *_calloc - function that allocates memory for an array, using
 *
 * @nmemb: int
 * @size: int
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p = NULL;
	unsigned int length = 0;

	length = nmemb * size;
	if (length != 0)
	{
		p = malloc(length);
		if (p != NULL)
		{
			for (i = 0; i < length; i++)
			{
				*(p + i) = 0;
			}
			return (p);
		}
	}
	return (p);
}
