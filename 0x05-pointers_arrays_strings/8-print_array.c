#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an integer array
 * @a: The array
 * @n: The number of elements of array to be printedi
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
	printf("\n");
}
