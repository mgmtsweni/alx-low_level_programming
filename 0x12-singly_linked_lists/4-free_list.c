#include "lists.h"

/**
 * free_list - free the memory allocated to a linked list
 * @head: a double pointer to a linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *next;

	while (!head)
	{
		next = head->next;
		free(head);
		head = next;
	}
	head = NULL;
}
