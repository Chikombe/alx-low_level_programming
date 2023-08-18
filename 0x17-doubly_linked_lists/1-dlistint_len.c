#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: a pointer to the head of the linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node_count;

	node_count = 0;

	if (h == NULL)
		return (node_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
