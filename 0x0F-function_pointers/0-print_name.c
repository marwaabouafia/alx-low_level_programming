#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 *
 * @name: pointer to string name to print
 * @f: pointer to function that prints
 *
 * Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
