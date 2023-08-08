#include <stdlib.h>
#include "main.h"

/**
 * _strlen- a funtion that returns the
 * length of a string
 * @s: the string
 * Return: string length
 */

int _strlen(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
		++ln;
	return (ln);
}

/**
 * argstostr- a function that concatenates all
 * arguments of my program
 * @ac: the variable holding the length of
 * the arguments
 * @av: the variable holding the arguments
 * Return: a pointer to the char string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *ptr;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	if (av != NULL && ac > 0)
	{
		for (i = 0; i < ac; ++i)
			size += _strlen(av[i]) + 1;
		ptr = malloc(size * sizeof(char) + 1);

		if (ptr != NULL)
			for (i = 0; i < ac; ++i)
			{
				for (j = 0; av[i][j] != '\0'; ++j, ++k)
					ptr[k] = av[i][j];
				ptr[++k] = '\n';
			}
	}
	return (ptr);
}
