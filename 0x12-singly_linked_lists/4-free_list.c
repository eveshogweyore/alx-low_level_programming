#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of list_t list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *currentlist;

	while ((currentlist = head) != NULL)
	{
		head = head->next;
		free(currentlist->str);
		free(currentlist);
	}
}
