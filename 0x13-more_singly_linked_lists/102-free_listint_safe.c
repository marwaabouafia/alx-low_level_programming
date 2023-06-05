#include "lists.h"

/**
 * find_listint_loop - function that frees a listint_t list
 *
 * @head: Pointer to the start of a list
 *
 * Return: Address of where the loop starts, NULL if
 * no loop is found
 *
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	void *addr_prev, *addr_actual;
	unsigned int counter = 0;
	int flag = 0;

	if (h == NULL || *h == NULL)
		return (0);

	addr_prev = (void *)*h;
	while (*h)
	{
		addr_actual = (void *)*h;
		if (addr_actual >= addr_prev && flag == 1)
		{
			*h = NULL;
			h = NULL;
			return (counter);
		}
		current = (*h)->next;
		(*h)->next = NULL;
		free(*h);
		*h = current;
		addr_prev = addr_actual;
		flag = 1;
		counter++;
	}
	h = NULL;

	return (counter);
}
