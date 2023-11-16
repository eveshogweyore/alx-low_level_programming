#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node as the beginning of list_t list
 * @head: address of the head node of list_t list
 * @str: string to be added to the list_t node
 *
 * Return: On success (address of new element), otherwise (NULL)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;

	newlist = malloc(sizeof(list_t));
	if (newlist == NULL)
	{
		free(newlist);
		return (NULL);
	}

	newlist->str = strdup(str);
	newlist->len = strlen(str);
	newlist->next = *head;

	*head = newlist;

	return (*head);
}
