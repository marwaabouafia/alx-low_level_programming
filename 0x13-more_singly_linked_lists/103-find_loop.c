#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 *
 * @head: Pointer to the start of a list
 *
 * Return: Address of where the loop starts, NULL if
 * no loop is found
 *
 */

listint_t *find_listint_loop(listint_t *head)
{

	listint_t *current;

	current = head;
	if (head == NULL)
		return (NULL);


	while (current)
	{
		if (current->next >= current && current->next != NULL)
			return (current->next);

		current = current->next;
	}
	return (NULL);
}
