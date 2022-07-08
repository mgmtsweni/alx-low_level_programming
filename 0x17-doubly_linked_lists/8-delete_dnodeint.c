#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given idx
 * @head: pointer to head of doubly linked list
 * @index: index
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *idx;

	if (head == NULL || *head == NULL)
		return (-1);

	idx = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(idx);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (idx->next != NULL))
	{
		index -= 1;
		idx = idx->next;
	}

	if (index == 0)
	{
		idx->prev->next = idx->next;
		if (idx->next != NULL)
			idx->next->prev = idx->prev;
		free(idx);
		return (1);
	}
	return (-1);
}
