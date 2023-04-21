#include <stdio.h>

/**
 * main - a simple program that outputs unordered
 * combinations of two digit integers without duplicates
 *
 * Return: 0 on success
 */
int main(void)
{
	int i1;
	int i2;
	int j1;
	int j2;

	for (i1 = 0; i1 < 10; i1++)
	{
		for (i2 = 0; i2 < 10; i2++)
		{
			j2 = i2 + 1;
			j1 = i1;
			for (; j1 < 10; j1++)
			{
				for (; j2 < 10; j2++)
				{
					putchar(i1 + '0');
					putchar(i2 + '0');
					putchar(' ');
					putchar(j1 + '0');
					putchar(j2 + '0');
					if (i1 != 9 || j1 != 9 || i2 != 8 || j2 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
