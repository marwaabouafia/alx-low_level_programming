#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 *
 * @head: Pointer to the start of the list
 * @index: The index of the node to look for
 *
 * Return: The node, NULL if the node doesn't exist
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	current = head;
	for (counter = 0; counter != index && current != NULL;
			current = current->next, counter++)
	{
		;
	}

	if (current)
		return (current);
	else
		return (NULL);
}
