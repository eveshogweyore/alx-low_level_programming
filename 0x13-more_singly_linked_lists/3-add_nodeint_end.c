#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end of listint_t list
 * @head: pointer to the head of listint_t list
 * @n: value to be added at the end of list
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current_node->next)
		current_node = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
