#include "lists.h"
/**
 * add_dnodeint - add node to front of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!head || !new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (*head);
}
