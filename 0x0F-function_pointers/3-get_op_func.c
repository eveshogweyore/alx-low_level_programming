#include "3-calc.h"

/**
 * get_op_func - selects the current function to perform
 * 				 the operation asked by the user
 * @s: the operation
 *
 * Return: On success (function to be performed)
 *		   otherwise (NULL)
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
	int i;

	for (i = 0; i < 5; i++)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
	}
	if (ops[i].op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	return (NULL);
}
