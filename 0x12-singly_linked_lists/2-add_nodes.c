#include "lists.h"

/*
 * add_nodes - adds a new node at the beginning.
 * @head: head of the list
 * @str: string to store in the list
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	if (head && str)
	{
		tmp->str = strup(str);
		tmp->len = strlen(str);
		tmp->next = *head;
		*head = tmp;
	}
	return (head);
}
