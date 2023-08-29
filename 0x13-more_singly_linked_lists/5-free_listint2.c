#include "lists.h"

/**
 * free_listint2 - free list
 * @head:pointer to list
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *d;

	if (head == NULL)
		return;
	while (*head)
	{
		d = *head;
		*head = (*head)->next;
		free(d);
	}
	head = NULL;
}
