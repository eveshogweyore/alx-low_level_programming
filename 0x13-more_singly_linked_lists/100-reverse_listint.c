#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of list
 *
 * Return: On success (pointer to the reversed list)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *current_node = *head;

	while (*head && (*head = (*head)->next))
	{
		current_node->next = prev_node;

		prev_node = current_node;

		current_node = *head;
	}

	if (!(*head) && prev_node)
		current_node->next = prev_node;

	*head = current_node;

	return (*head);
}
