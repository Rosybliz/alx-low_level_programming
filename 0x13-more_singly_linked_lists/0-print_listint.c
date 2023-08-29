#include "list.h"

/**
 * print_listint- a function thatprints all elements in a list
 * @h: the list's head pointer
 * Return: size of int
 */
size_t print_listint(const listint_t *h)
{
	size_t bookList = 0;

	while (h)
	{
		printf("%d\n", (*h).n);
		bookList++;
		h = (*h).next;
	}
	return (bookList);
}
