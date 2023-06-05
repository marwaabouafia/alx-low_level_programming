#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 *
 * @head: Pointer to the pointer at the start of the list
 * @n: The value to assign to the nodes integer value
 *
 * Return: The address of the new element, NULL if it fails
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
