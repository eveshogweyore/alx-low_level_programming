#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t list
 * @head: head node of listint_t list
 * @index: index to search for in listint_t list
 *
 * Return: On success (nth node), otherwise (NULL)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index_count = 0;

	while (head)
	{
		if (index_count == index)
			return (head);
		head = head->next;
		index_count++;
	}

	return (NULL);
}
