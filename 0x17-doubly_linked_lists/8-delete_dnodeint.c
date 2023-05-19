#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at given position.
 * @head: pointer to pointer of head of list.
 * @index: position at which node is deleted.
 *
 * Return: 1 if success, -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		if (head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (i < index)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		++i;
	}
	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
