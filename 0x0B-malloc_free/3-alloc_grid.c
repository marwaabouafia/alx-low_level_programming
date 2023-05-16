#include "main.h"

/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 *
 * @width: int
 * @height: int
 *
 * Return: Null
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **array;

	if (width > 0 && height > 0)
	{
		array = malloc(height * sizeof(int));
		if (array == NULL)
			return (NULL);
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(width * sizeof(int));
			if (array[i] == NULL)
			{
				for (k = 0; k < i; k++)
				{
					free(array[k]);
				}
				free(array);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
		return (array);
	}
	return (NULL);
}
