#include "main.h"

/**
 * *_strdup -  a function that returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: Null
 *
 */

char *_strdup(char *str)
{
	int i = 0, s = 0;
	char *c;

	if (str != NULL)
	{
		while (str[i])
		{
			s++;
			i++;
		}
		c = malloc((s * sizeof(char)) + 1);
		if (c == NULL)
			return (NULL);
		c[s] = '\0';
		do {
			c[s - 1] = str[s - 1];
		} while (s--);
		return (c);
	}
	return (NULL);
