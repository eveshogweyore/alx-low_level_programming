#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node
 * @idx: index of the list where new node should be added
 * @n: value of new node
 *
 * Return: On success (address of new node), otherwise (0)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *current_node = *head;
	listint_t *prev_node = NULL;
	unsigned int idx_count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (!current_node && idx == 0)
	{
		new_node->n = n;
		*head = new_node;
		(*head)->next = NULL;
		return (new_node);
	}

	while (current_node || (!current_node && (idx_count == idx)))
	{
		if (idx_count == idx)
		{
			new_node->n = n;
			new_node->next = current_node;
			if (prev_node)
				prev_node->next = new_node;
			else
				*head = new_node;
		}
		prev_node = current_node;
		if (current_node)
			current_node = current_node->next;
		idx_count++;
	}
	return (new_node);
}
