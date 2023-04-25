#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the charactar
 *
 * @c: the character to print
 *
 * Return: 1 success -1 error
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
