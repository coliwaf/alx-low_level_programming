#include "lists.h"

/**
 * list_len - return length of elements in a linked list
 * @h: list_t linked list
 *
 * Return: length of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
