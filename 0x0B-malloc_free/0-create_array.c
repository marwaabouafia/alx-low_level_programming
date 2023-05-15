#include "main.h"

/**
 * *create_array -  function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: int
 * @c: char
 *
 * Return: pointer to array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	*s = malloc(size);
	if (size == 0 || n == 0)
		return (0);
	while (size--)
		s[size] = c;
	return (s);
}
