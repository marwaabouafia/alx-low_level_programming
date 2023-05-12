#include "main.h"

/**
 * main - entry point
 *
 * @argc: int argument
 * @argv: pointer to array of string arguments
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
