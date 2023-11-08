#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each array elements
 * @array: the given array
 * @size: size of array
 * @action: the pointer function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && size > 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
