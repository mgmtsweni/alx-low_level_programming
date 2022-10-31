#include "lists.h"

/**
 * list_len - Determines the number of elements in a linked list_t list
 * @h: the list_t linked list.
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	int numElem = 0;

	while (h)
	{
		numElem++;
		h = h->next;
	}
	return (numElem);
}
