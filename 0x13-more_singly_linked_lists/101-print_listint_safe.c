#include "lists.h"

/**
 * print_listint_safe - prints a linked list.
 * @head: head of the linked list
 *
 * Return: void.
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numnodes = 0;
	const listint_t *curr = head, *temp;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		numnodes++;

		temp = curr;
		curr = curr->next;

		if (temp <= curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}
	}
	return (numnodes);
}
