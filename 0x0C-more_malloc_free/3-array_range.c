#include "main.h"

/**
 * *array_range -  a function that creates an array of integers.
 *
 * @min: int
 * @max: int
 *
 * Return: pointer
 *
 */

int *array_range(int min, int max)
{
	int i;
	int *p = NULL;
	int difference;

	difference = max - min + 1;
	if (max >= min)
	{
		p = malloc(difference * sizeof(int));
		if (p != NULL)
		{
			for (i = 0; i < difference; i++, min++)
			{
				*(p + i) = min;
			}
			return (p);
		}
	}
	return (p);
}
