#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 *
 * @head: pointer to a list
 * @str: string to the added
 *
 * Return: address of new element
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
