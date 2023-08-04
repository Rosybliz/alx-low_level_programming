#include <stdio.h>
#include <stdlib.h>

/**
 * main- a program that multiplies two numbers
 * @argc: the count of arguments passed
 * @argv: the pointer to a string that holds the arguments
 * Return: Return 0 if success and 1 if not
 */

int main(int argc, char *argv[])
{
	int x, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		x = num1 * num2;
		printf("%d\n", x);
	}
	if (argc != 3)
	{
		puts("Error\n");
		return (1);
	}
	return (0);
}

