#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator given by the user
 *
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"*", op_mul},
	{"-", op_sub},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	int d;

	while (ops[d].op != NULL)
	{
		if (strcmp(ops[d].op, s) == 0)
			return (ops[d].f);
		d++;
	}

	return (NULL);
}
