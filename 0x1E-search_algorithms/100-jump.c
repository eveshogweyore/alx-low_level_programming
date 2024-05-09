#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search for a value in a sorted array.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in the array.
 * @value: value to search for.
 *
 * Return: On success, the index of value to search for.
 *         Otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t low = 0, high = jump;

	if (!array)
		return (-1);

	for (; low < size; low += jump, high += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);

		if (high >= size)
		{
			high = size - 1;
			printf("Value found between indexes [%lu] and [%lu]\n", low, high);
			break;
		}

		if (value <= array[high])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", low, high);
			break;
		}
	}


	for (; low <= high; low++)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);

		if (array[low] == value)
			return (low);
	}

	return (-1);
}
