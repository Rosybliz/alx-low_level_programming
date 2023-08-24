#include "lists.h"

/**
 * free_list- this function frees a list_t list
 * @head: the head of the linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = (*head).next;
		free((*head).str);
		free(head);

		head = ptr;
	}
}
