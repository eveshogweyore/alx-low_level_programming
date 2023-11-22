#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node in list
 *
 * Return: On success (number of nodes in list), otherwise (98)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, length = 0;
	listint_t *buffer[1024];

	if (!head)
		exit(98);

	for (; head; head = head->next, length++)
	{
		for (i = 0; i < length; i++)
		{
			if (buffer[i] == (void *)head)
				return (length);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		buffer[length] = (void *)head;
	}

	return (length);
}
