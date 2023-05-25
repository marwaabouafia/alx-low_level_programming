#include "variadic_functions.h"

/**
 * print_strings - function that prints strings,
 *
 * @n: number of parameters
 * @separator: string to be printed between numbers
 *
 * Return: void
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	char *arg;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(va, char *);
		if (arg == NULL)
			printf("(nil)");
		else
			printf("%s", arg);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(va);
	printf("\n");
}
