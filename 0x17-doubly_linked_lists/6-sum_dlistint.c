#include "lists.h"
/**
 * sum_dlistint - Sum of * the list data
 * @head: Head of the linked list
 * Return: total of all the data (int)
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (!head)
		return (total);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
