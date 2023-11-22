#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node in list
 *
 * Return: On success (number of nodes in list), otherwise (98)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t length = 0;
	listint_t *mem = NULL;
	listint_t *temp;

	if (!head)
		exit(98);

	for (; head; head = head->next, length++)
	{
		if (mem)
		{
			temp = mem;
			for (; temp; temp = temp->next)
			{
				if (temp->n == (int)(long int)head)
					return (length);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		add_nodeint(&mem, (long int)head);
	}

	return (length);
}
