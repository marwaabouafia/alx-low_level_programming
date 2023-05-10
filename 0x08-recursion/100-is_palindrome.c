#include "main.h"
#include <string.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * and 0 if not
 * @s: pointer to string
 *
 * Return:  returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (*s == '\0')
		return (1);
	if (*s != '\0')
	{
		if (s[0] == s[len
		return (is_palindrome(s + 1));
	}
}
