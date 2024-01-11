#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: Pointer to first node in list.
 * @n: Value to be added to new node.
 *
 * Return: On success, address to new element. On failure, NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *curr = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (curr == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	while (curr->next != NULL)
		curr = curr->next;

	new_node->next = curr->next;
	curr->next = new_node;
	new_node->prev = curr;

	return (new_node);
}
