#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - pointer function
 * @s: operator
 *
 * Description: selects the correct operation
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	int x = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[x].op && strcmp(ops[x].op, s) != 0)
		x++;
	return (ops[x].f);

	printf("Error\n");
	exit(99);
}
