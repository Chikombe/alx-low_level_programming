#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe -  a function that prints a listint_t linked list
 * @head: pointer to the head of linked list
 * @n: value of the node
 * @next: pointer to the next node in the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = head;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;

		if (temp <= temp->next)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			fprintf(stderr, "Error linked list is a loop\n");
			exit(98);
		}

		temp = temp->next;
	}

	return (count);
}
