#include "main.h"

/**
 * count_digit - count number of digits in an integer
 * @i: number to count
 *
 * Return: mumber of digits in the integer
 */
unsigned int count_digit(unsigned int i)
{
	unsigned int count = 0;

	do {
		i /= 10;
		++count;
	} while (i != 0);
	return (count);
}

/**
 * main - multiplies 2 numbers
 * @argc: int argument
 * @argv: pointer to array of string arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if ((strlen(argv[1]) == count_digit(num1))
				&& (strlen(argv[2]) == count_digit(num2)))
		{
			printf("%d\n", num1 * num2);
			return (0);
		}
	}
	printf("Error\n");
	exit(98);
}
