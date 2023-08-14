#include <stdio.h>
#include "main.h"
#include "dog.h"
/**
 * init_dog- a function that initializes a variable
 * of type struct dog
 * @d: the pointer to the structure
 * @name: the first element of the structure
 * @age: the second element of the structure
 * @owner: the third element of the structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
