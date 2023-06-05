#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 *
 * @head: Pointer to the pointer to the start of the list
 *
 * Return: The value stored in the node
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	current = *head;
	if (current == NULL)
		return (0);
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
