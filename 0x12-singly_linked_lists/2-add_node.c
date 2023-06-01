#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 *
 * @head: pointer to a list
 * @str: string to the added
 *
 * Return: pointer to head of list
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);

		for (nchar = 0; str[nchar]; nchar++)
			;

		new->len = nchar;
		new->next = *head;
		*head = new;
		return (new);

	}
	return (NULL);
}
