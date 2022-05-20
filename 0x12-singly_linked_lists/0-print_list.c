#include "lists.h"

/**
 * print_list - prints the contents of a linked list
 * @h: the given linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int numNodes = 0;
	
	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		numNodes++;
		h = h->next;
	}

	return (numNodes);
}

