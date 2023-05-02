#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate pass
 *
 * Return: 0
 *
 */

int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 120;
		s += c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
