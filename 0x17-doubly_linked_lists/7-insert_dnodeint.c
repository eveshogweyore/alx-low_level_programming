#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Pointer to the first node.
 * @idx: Node implying the index in list ti add new value.
 * @n: New value to be added.
 *
 * Return: On success, pointer to new node. On failure, NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *new_node;
	unsigned int index = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = curr;
		if (curr)
			curr->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (curr && idx != 0)
	{
		if ((index + 1) == idx)
		{
			new_node->next = curr->next;
			new_node->prev = curr;
			if (curr->next)
				curr->next->prev = new_node;
			else
				new_node->next = NULL;
			curr->next = new_node;
			return (new_node);
		}
		curr = curr->next;
		index++;
	}
	free(new_node);
	return (NULL);
}
