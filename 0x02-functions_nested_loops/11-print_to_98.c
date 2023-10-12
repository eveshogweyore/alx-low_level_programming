#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print numbers from n to 98
 * @num: The first number
 *
 * Return: void
 */
void print_to_98(int num)
{
	if (num > 98)
	{
		for (; num > 98; num--)
		{
			printf("%d, ", num);
		}
	}
	else if (num < 98)
	{
		for (; num < 98; num++)
		{
			printf("%d, ", num);
		}
	}
	printf("%d\n", num);
}
