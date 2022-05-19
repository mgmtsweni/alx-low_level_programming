#include "list.h"

/**
 * print_list - prints contents of a link list.
 * @h: passed linked list
 * return: the number of the contents in the lists
 */
size_t print_list(const list_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			priint("[0] (nil)\n");
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
