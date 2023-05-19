#include "lists.h"

/**
 * print_dlistint - prints out the content of the dlistint_t
 * @h: pointer to the dlistint_t
 *
 * Return: pointer to dlistint_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}

	return (node_count);
}
