#include <stdio.h>

/**
 * main- a program that prints the number
 * of arguments passed to it
 * @argc: the count of arguments supplied
 * @argv: the array of pointer to the string
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	
	return (0);
}
