#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagaonals of
 *                  a square matrix
 * @a: the square matrix
 * @size: size of square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0, length = size * size;

	for (i = 0; i < length; i += (size + 1))
		sum1 += a[i];
	for (i = size - 1; i < (length - 1); i += (size - 1))
		sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}
