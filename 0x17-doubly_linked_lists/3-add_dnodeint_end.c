#include "lists.h"
/**
 * add_dnodeint_end - Add node in the end of the list
 * @head: Memory address of the head of the list
 * @n: Integer data
 * Return: Head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *last;

	if (!head)
		return (NULL);

	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

    if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	new->next = NULL;
	new->prev = last;
	last->next = new;

	return (new);
}
