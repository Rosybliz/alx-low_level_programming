#include "lists.h"

/**
 * print_list- a function that prints the element of  a list.
 * @h: the list
 * Return: the size of the list( that means, it'll return an int)
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	char *str;

	while (*h != NULL)
	{
		printf("[%d] ", (*h).len);
		str = (*h).str;

		if (str == NULL)
			str = "(nil)";
		printf("%s\n", str);
		h = (*h).next;
		++i;
	}
	return (i);
}
