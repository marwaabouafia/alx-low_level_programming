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
	int num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	printf("Error\n");
	return (-1);
}
