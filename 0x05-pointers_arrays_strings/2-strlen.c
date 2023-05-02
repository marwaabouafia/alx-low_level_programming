#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 *
 * @s: string
 *
 * Return: length of strength
 *
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;
	return (c);
}
