#include "lists.h"

/**
 * get_nodeint_at_index - return nth node index
 * @head:pointer to node
 * @index:given index int
 * Return:Null or index of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t y;

	for (y = 0; y < index && (*head).next; y++)
	{
		head = (*head).next;
	}
	if (y < index)
	return (NULL);
	return (head);
}
