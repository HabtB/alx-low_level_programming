#include "lists.h"

/**
* add_dnodeint - inserts new nodes in a given list
*
* @head: head of the list
* @n: data of the node
* Return: the number of nodes
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = h;

	if (h != NULL)
		h = h->next;
	*head = new;

	return (new);
}
