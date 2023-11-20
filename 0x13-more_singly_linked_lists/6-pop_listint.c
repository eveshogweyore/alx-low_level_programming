#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head node of listint_t linked list
 * @head: head node of listint_t
 *
 * Return: On success (head node's data), otherwise (0)
 */
int pop_listint(listint_t **head)
{
	listint_t *aux_node;
	int value;

	if (*head == NULL)
		return (0);

	aux_node = *head;
	value = aux_node->n;
	*head = (*head)->next;

	free(aux_node);

	return (value);
}
