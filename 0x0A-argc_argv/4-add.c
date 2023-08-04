#include <stdio.h>
#include <stdlib.h>

/**
 * main- a program that adds positive numbers
 * @argc: tha count of the arguments passed
 * @argv: the pointer that holds the strings of arguments
 * Return: if error, return 1, else return 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i, x, num;

	for (i = 0; i >= 0; ++i)
	{
		num = atoi(argv[i]);
		x = x + num;
		printf("%d\n", x);
	}
	if (i != 0 && i < 0)
	{
		puts("error");
		putchar('\n');
		return (1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
