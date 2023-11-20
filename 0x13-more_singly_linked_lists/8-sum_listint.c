#include "lists.h"

/**
 * sum_listint - sums up all data of a listint_t list
 * @head: head node of listint_t list
 *
 * Return: On success (sum of all data 'n'), otherwise (0)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
