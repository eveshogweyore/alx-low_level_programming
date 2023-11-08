#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs arithmetic operations on two numbers
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: On success (result of arithmetic operation
 * otherwise (Error)
 */
int main(int argc, char *argv[])
{
	int (*ops_function)(int, int);
	int result;

	if (argc == 4)
	{
		ops_function = get_op_func(argv[2]);
		result = ops_function(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
