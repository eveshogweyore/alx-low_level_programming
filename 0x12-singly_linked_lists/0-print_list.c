#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns length of string
 * @str: string to check for
 *
 * Return: length of string
 */
size_t _strlen(char *str)
{
	size_t length = 0;

	while (str[length])
		length++;

	return (length);
}

/**
 * prints - prints all elements of a list_t list
 * @h: each node in the list
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (!h)
		return (1);

	while (h)
	{
		if (!(h->str))
			printf("[%lu] (nil)\n", i);
		else
			printf("[%lu] %s\n", _strlen(h->str), h->str);
		h = h->next;
		i++;
	}

	return (i);
}
