#include <stdio.h>

/**
 * main- a program that prints its name
 * followed by a new line
 * @argc: the argument count of type integer
 * @argv: the array of strings that hold the
 * command line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
