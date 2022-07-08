#include "lists.h"
/**
 * dlistint_len - Count number of elements in the list
 * @h: Head of the linked list
 * Return: Number of nodes (size_t)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	if (node == NULL)
		return (node);

	while (h != NULL)
	{
		h = h->n;
		node++;
	}
	return (node);
}
