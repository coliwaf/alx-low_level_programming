#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements in list_t linked list
 * @h: pointer to list to print
 *
 * Return: length of nodes in @h
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
