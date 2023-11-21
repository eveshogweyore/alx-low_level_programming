#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node of a listint_t list
 * @head: ponter to the first node in the list
 * @index: index to delete in listint_t list
 *
 * Return: On success (1), otherwise (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node = *head;
	listint_t *current_node = *head;
	unsigned int index_count = 0;

	if (index == 0 && *head)
	{
		*head = (*head)->next;
		free(prev_node);
		return (1);
	}

	while (current_node)
	{
		if (index_count == index)
		{
			prev_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		prev_node = current_node;
		current_node = current_node->next;
		index_count++;
	}

	return (-1);
}
