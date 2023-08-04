#include <stdio.h>

/**
 * main- a program that prints all arguments it receives
 * @argc: the count of arguments
 * @argv: the pointer to the argument strings
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; ++i)
	{
		printf("%s\n", argv[i]);
		putchar('\n');
	}
	return (0);
}
