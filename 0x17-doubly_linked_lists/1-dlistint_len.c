#include "lists.h"

/**
 * dlistint_len - returns the no. of elements in dlistint_t list.
 * @h: The head of the linked list.
 *
 * Return: On success, the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}

	return (count);
}
