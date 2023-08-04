#include <stdio.h>

/**
 * main- a program that prints all arguments it receives
 * @argc: the count of arguments
 * @argv: the pointer to the argument strings
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i <= 0; ++i)
	{
		printf("%s", argv[i]);
		putchar('\n');
	}
	return (0);
}
