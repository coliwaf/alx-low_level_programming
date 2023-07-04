#include "lists.h"

/**
 * free_list - frees a linked list list_t
 * @head: list to free
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
