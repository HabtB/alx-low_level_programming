#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked
 * using jump search.
 * @list: A pointer to the  head of the linked list to search in
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: returns a pointer to the first node when found; NULL otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)

{
	size_t initial;
	size_t node_jumps;

	listint_t *node, *jump;

	if (!list || size == 0)
		return (NULL);

	initial = 0;
	node_jumps = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (initial += node_jumps; jump->index < initial; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
