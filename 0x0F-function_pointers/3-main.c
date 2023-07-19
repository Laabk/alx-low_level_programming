#include "3-calc.h"

/**
 * main - performing simple operations
 * @argc: arguments number
 * @argv: arguments array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int arg1;
	int arg2;
	int result;
	char o;

	if (!(argc == 4))
	{
	printf("Error\n");
	exit(98);
	}

	arg2 = atoi(argv[3]);
	arg1 = atoi(argv[1]);

	func = get_op_func(argv[2]);

	if (!func)
	{
	printf("Error\n");
	exit(99);
	}

	o = *argv[2];

	if (o == '%' || o == '/' || arg2 == 0)
	printf("Error\n");
	exit(100);
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
