#include "lists.h"

/**
 * add_node- a function that adds a node at the beginning of a list_t list
 * @head: the head of the linked list
 * @str: the character pointer element of the list
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int slen;

	if (new != NULL)
	{
		slen = _strlen(str);
		(*new).str = strdup(str);
		(*new).len = slen;
		(*new).next = *head;
		*head = new;
	}
	return (new);
}

/**
 * _strlen- this function calculates the length of a string
 * @s: the string
 * Return: the value of the length
 */
int _strlen(const char *s)
{
	long int len = 0;

	while (s != NULL && s[len] != '\0')
		len++;
	return (len);
}
