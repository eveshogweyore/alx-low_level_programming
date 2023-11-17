#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node as the end of list_t list
 * @head: address of the head node of list_t list
 * @str: string to be added to the list_t node
 *
 * Return: On success (address of new element), otherwise (NULL)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	list_t *lastlist = *head;

	newlist = malloc(sizeof(list_t));
	if (newlist == NULL)
	{
		free(newlist);
		return (NULL);
	}

	newlist->str = strdup(str);
	newlist->len = strlen(str);
	newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
	}
	else
	{
		while (lastlist->next != NULL)
			lastlist = lastlist->next;
		lastlist->next = newlist;
	}

	return (newlist);
}
