#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 *
 */

void print_all(const char * const format, ...)
{
	va_list va;
	unsigned int i;
	char *arg;

	va_start(va, format);
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
