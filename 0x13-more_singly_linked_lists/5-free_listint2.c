#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of listint_t list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *prev_node;

	while (*head)
	{
		prev_node = *head;
		*head = (*head)->next;
		free(prev_node);
	}

	*head = NULL;
}
