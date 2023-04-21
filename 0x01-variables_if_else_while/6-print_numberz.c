#include <stdio.h>

/**
 * main - main function
 * Description:printinggg single digits numbers of base 10 starting from 01
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');

	return (0);
}
