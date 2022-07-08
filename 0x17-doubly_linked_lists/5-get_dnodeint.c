#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list.
 * @head: head of linked list
 * @index: node index to return
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    if(head == NULL)
        return NULL;

    while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);

	return (NULL);
}
