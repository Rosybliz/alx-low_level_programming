#include "lists.h"

/**
 * add_node_end- a function that adds a new node to the end of list_t list
 * @head: the head of the singly linked list
 * @str: the character pointer element of the list
 * Return: return the address of the new element or null on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *ptr;
	int slen;

	if (new != NULL)
	{
		slen = _strlen(str);
		(*new).str = strdup(str);
		(*new).len = slen;
		(*new).next = NULL;

		if (*head == NULL)
			*head = new;
		else
		{
			ptr = *head;
			while ((*ptr).next != NULL)
				ptr = (*ptr).next;
			(*ptr).next = new;
		}
	}
	return (new);
}

/**
 * _strlen- a funtion that returns the length of a string
 * @s: the string
 * Return: return the lenth
 */

int _strlen(const char *s)
{
	long int len = 0;

	while (s != NULL && s[len] != '\0')
		len++;
	return (len);
}

