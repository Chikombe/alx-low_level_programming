#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * index of a dlistint_t linked list.
 * @head: pointer to th head of the list
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	dlistint_t *previous_node;
	unsigned int itr;

	current_node = *head;

	if (current_node != NULL)
		while (current_node->prev != NULL)
			current_node = current_node->prev;

	itr = 0;

	while (current_node != NULL)
	{
		if (itr == index)
		{
			if (itr == 0)
			{
				*head = current_node->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				previous_node->next = current_node->next;

				if (current_node->next != NULL)
					current_node->next->prev = previous_node;
			}

			free(current_node);
			return (1);
		}
		previous_node = current_node;
		current_node = current_node->next;
		itr++;
	}
	return (-1);
}

