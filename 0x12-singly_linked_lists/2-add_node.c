#include "lists.h"
/**
 * _strlen - finds the length of a string
 * @s: the string whose length is to be calculated
 * Return: the length of s
 */
int _strlen(const char *s)
{
	int i = 0;
	
	while (*s++)
		i++;
	return (i);
}
/**
 * add_node - adds a new node at the beginning of a list.
 * @head: a double pointer to a list_t linked list
 * @str: string to be copied to the str member of head
 * Return: returns a pointer to newly created node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (head && str)
	{
		tmp = malloc(sizeof(list_t));
		if (!tmp)
			return (NULL);

		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = *head;

		*head = tmp;
	}
	return (tmp);
}
