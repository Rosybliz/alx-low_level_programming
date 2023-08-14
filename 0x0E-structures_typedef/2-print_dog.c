#include "dog.h"

/**
 * print_dog- a function that prints a struct dog structure
 * @d: the object of the structure
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if ((*d).name == NULL)
		printf("\n%s: (nil)", (*d).name);
	else if ((*d).age == 0.000000)
		printf("\n%f: (nil)", (*d).age);
	else if ((*d).owner == NULL)
		printf("\n%s: (nil)", (*d).owner);
	else if (d == NULL)
		printf(" ");
	else
		printf("Name: %s\n Age: %f\n Owner: %s\n", (*d).name, (*d).age, (*d).owner);
}
