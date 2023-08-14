#include <stdio.h>

/**
 * main- a function that prints the file it was compiled from
 * Return: nothing
 */

int main(void)
{
	printf("Compiled from - %s", __FILE__);
	putchar('\n');
	return (0);
}
