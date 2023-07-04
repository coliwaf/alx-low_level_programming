#include "lists.h"

/**
 * add_node_end - adds a new node at end of linked list
 * @head: a double pointer to linked list list_t
 * @str: string to add to list
 * Return: address of new element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *curr;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	curr = *head;
	if (curr == NULL)
	{
		*head = new;
		return (new);
	}

	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;

	return (new);
}
