#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: (int)
 */
int get_endianness(void)
{
	int flag = 1;
	int a = 1;
	char *b = (char *)&a;

	flag = *b + 48;
	return (flag);
}
