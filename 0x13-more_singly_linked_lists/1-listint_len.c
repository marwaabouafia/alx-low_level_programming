#include "lists.h"

/**
 * listint_len - function that returns the number of element
 *
 * @h: The pointer to the start of the list
 *
 * Return: Number of nodes in the list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
