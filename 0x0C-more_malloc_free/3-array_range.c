#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: On success (sequential ordered numbers from min - max)
 *         otherwise (NULL)
 */
int *array_range(int min, int max)
{
	int *numarray, i;

	if (min > max)
		return (NULL);

	numarray = malloc(((max - min) + 1) * sizeof(int));
	if (numarray == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		numarray[i] = min;

	return (numarray);
}
