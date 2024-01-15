#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index "index"
 * @head: Pointer to the first node in linked list.
 * @index: The index to be deleted.
 *
 * Return: On success, 1. On failure, -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int idx = 0;

	while (curr)
	{
		if (idx == index)
		{
			if (idx == 0)
			{
				*head = curr->next;
				if (curr->next)
					curr->next->prev = NULL;
			}
			else
			{
				if (curr->prev)
					curr->prev->next = curr->next;
				if (curr->next)
					curr->next->prev = curr->prev;
			}
			free(curr);
			return (1);
		}
		curr = curr->next;
		idx++;
	}

	return (-1);
}
