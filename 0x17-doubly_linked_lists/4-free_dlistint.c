#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: Pointer to the first node.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
