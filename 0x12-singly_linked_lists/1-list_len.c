#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a list_t list
 * @h: each node in the list
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
