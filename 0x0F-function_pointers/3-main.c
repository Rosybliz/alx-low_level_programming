#include "3-calc.h"

/**
 * main- a function that performs arithmetic operations on
 * two integers
 * @argv:  argument list
 * @argc: argument count
 * Return: the integer result
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char *op;
	int (*op_f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_f = get_op_func(op);

	if (op_f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op_f(num1, num2);
	printf("%d\n", result);
	return (0);
}
