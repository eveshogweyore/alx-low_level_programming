#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t list
 * @head: Pointer to the first node.
 * @index: Index of Node to change it's value.
 *
 * Return: On success, address of node. On failure, NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int idx = 0;

	while (curr)
	{
		if (idx == index)
			return (curr);

		curr = curr->next;
		idx++;
	}

	return (curr);
}
