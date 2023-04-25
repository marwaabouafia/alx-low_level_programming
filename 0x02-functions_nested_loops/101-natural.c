#include "main.h"

/**
 * main - entyr point
 *
 * Return: always 0
 */

int main(void)
{
	int sum, n;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
