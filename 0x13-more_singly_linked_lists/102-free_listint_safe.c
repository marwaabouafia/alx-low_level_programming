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

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		holder = head;
		head = head->next;
		if (holder < head)
			return (head);
	}
	return (NULL);
}
