#include "lists.h"

/**
 * sum_dlistint - returns sum of all data(n) of a dliistint list.
 * @head: pointer to linked list.
 *
 * Return: sum(int).
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
