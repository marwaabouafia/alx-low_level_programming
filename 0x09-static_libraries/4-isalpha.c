#include "main.h"

/**
 * _isalpha -  a function that checks for alphabetic character
 *
 * @c: check input
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

