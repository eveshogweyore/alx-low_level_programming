#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t list
 * @h: pointer to the start of listint_t list
 *
 * Return: total count of elements in listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
