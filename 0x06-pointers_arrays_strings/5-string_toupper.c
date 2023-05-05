#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if ((s[c] >= 97) && (s[c] <= 122))
			s[c] = s[c] - 32;
	}

	return (s);
}
