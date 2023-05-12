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
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
