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
	int *numarray, length = 0, checkmin = min;
	unsigned int i;

	if (min > max)
		return (NULL);

	while (checkmin != max)
	{
		checkmin++;
		length++;
	}
	printf("Length is %d\n", length);
	numarray = malloc(length * sizeof(int));
	if (numarray == NULL)
	{
		free(numarray);
		return (NULL);
	}

	for (i = 0; i < (sizeof(int) * length); i++)
		numarray[i] = min + i;

	return (numarray);
}
