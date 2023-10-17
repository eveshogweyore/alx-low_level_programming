#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an integer array
 * @a - The array
 * @b - The number of elements of array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}

