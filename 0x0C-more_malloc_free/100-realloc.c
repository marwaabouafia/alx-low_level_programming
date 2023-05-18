#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 *
 * Return: pointer
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p != NULL)
			return (p);
	}
	p = malloc(new_size);
	if (p != NULL)
	{
		free(ptr);
		return (p);
	}
	return (NULL);
}
