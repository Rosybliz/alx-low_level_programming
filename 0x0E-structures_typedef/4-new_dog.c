#include "dog.h"

/**
 * new_dog- a function that creates a new dog
 * @name: the first element of the structure
 * @age: the second element of the dtructure
 * @owner: the third element of the structure
 * Return: returns NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	(*d).name = malloc(sizeof(char) * _strlen(name) + 1);
	(*d).age = age;
	(*d).owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if ((*d).name == NULL)
		free((*d).name);
	if ((*d).owner == NULL)
		free((*d).owner);
	free(d);
	return (NULL);

	_strcpy((*d).name, name);
	_strcpy((*d).owner, owner);
}

/**
 * _strlen- a function that calculates the length of a string
 * @s: the string
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy- a function that copies a string into another
 * @s1: first string
 * @s2: second dtring to be concatenated
 * Return: a pointer to s1
 */

char *_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
