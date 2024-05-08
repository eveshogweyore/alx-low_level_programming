#include "search_algos.h"
#include <math.h>

/**
 * _min - checks for the minimum of two integer numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: On success, the minimum number.
 */
size_t _min(size_t a, size_t b)
{
	if (a < b)
		return (a);

	return (b);
}

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
	size_t a = 0, j = sqrt(size), b = j;

	if (!array)
		return (-1);

	while (array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		a = b;
		b += j;
		if (a >= size)
		{
			a -= j;
			b -= j;
			break;
		}
	}

	if (b < size)
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	while (array[a] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		a += 1;
		if (a == _min(b, size))
			break;
	}

	if (array[a] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		return (a);
	}

	return (-1);
}
