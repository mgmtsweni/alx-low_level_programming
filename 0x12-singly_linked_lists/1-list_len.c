#include "lists.h"

/**
 * list_len - Determines the number of elements in a list
 * @h: passed linked list
 * Return : the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t NumElem = 0;

	while (h != NULL)
	{
		h = h->next;
		NumElem++;
	}
	return (NumElem);
}
