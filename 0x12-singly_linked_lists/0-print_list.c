#include "lists.h"

/**
 * print_list - prints all the nodes
 * @h: is the linked list
 *
 * Return: returns the number of nodes;
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] %p\n", h->str);
		else
			printf("[%d] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}
	return (i);
}
