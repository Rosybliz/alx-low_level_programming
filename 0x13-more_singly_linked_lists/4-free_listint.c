#include "lists.h"

/**
 * free_listint - free list
 * @head: pointer to node header
 * 
 * Description: while header does not point to null,
 * free memory of the node
 * Return: void
 */
void free_listint(listint_t *head)
{
        listint_t *check, *d;
        d = head;
	while (d != NULL)
	{
	        check = (*d).next;
	        free(d);
                d = check;
	}
}
