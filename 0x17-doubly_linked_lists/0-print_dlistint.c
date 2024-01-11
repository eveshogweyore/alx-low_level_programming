#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: The head of the linked list.
 *
 * Return: On success, the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		count++;
		curr = curr->next;
	}

	return (count);
}
