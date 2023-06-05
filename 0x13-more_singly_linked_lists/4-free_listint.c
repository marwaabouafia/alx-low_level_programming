#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: Pointer to the start of the list
 *
 * Return: void
 *
 */

void free_listint(listint_t *head)
{
	listint_t *freelist;

	while (head != NULL)
	{
		freelist = head;
		head = head->next;
		free(freelist);
	}
}
