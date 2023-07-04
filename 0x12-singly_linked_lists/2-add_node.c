#include "lists.h"

/**
 * add_node - add new node at beginning of a linked list
 * @head: initial linked list
 * @str: string to add to @head
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int len = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	while (str[len])
		len++;

	tmp->str = strdup(str);
	tmp->len = len;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
