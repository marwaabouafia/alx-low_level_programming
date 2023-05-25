#include "3-calc.h"

/**
 * get_op_func - returns a pointer to
 * the function that corresponds to the operator
 *
 * @s: input symbol
 * Return: pointer to another function the performs operation
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s))
			i++;
		else
			return (ops[i].f);
	}

	printf("Error\n");
	exit(99);
}
