#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t list.
 * @head: pointer to head of linked list.
 * @index: number of the element.
 * Return: NULL if node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	if (current != NULL && index == 0)
	{
		return (current);
	}

	return (NULL);
}
