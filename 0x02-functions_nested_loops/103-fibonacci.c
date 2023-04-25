#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 *
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float tsum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			tsum = tsum + sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", tsum);
	return (0);
}

