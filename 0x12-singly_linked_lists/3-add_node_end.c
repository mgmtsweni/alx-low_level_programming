#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: head of the list.
 * @str: string to store in the list.
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	size_t temp;
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	
	new->str = strdup(str);
	
	temp = 0;
	while (str[temp])
		temp++;

	new->len = temp;
	new->next = NULL;
	last = *head;

	if (last == NULL)
		*head = new;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
