#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: Pointer to the first node.
 * @n: Value for the new node.
 *
 * Return: On success, address of the new node. On failure, NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *curr = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	*head = new_node;

	new_node->n = n;
	new_node->next = curr;
	if (curr)
		curr->prev = new_node;
	new_node->prev = NULL;

	return (new_node);
}
