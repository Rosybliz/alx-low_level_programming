#include <stdio.h>
#include "main.h"

/**
 * init_dog- a function that initializes a variable
 * of type struct dog
 * @d: the object of the structure
 * @name: the first element of the structure
 * @age: the second element of the structure
 * @owner: the third element of the structure
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} struct dog *d;
