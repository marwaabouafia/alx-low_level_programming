#include "lists.h"

/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 *
 * @h: a list
 *
 * Return: number of nodes
 *
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	if (h != NULL)
	{
		while (1)
		{
			s++;
			if (h->next == NULL)
				break;
			h = h->next;
		}

	}
	return (s);
}
