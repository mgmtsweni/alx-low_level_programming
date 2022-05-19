#include "lists.h"

/**
 * free_list - free memory from list
 * @head: head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
