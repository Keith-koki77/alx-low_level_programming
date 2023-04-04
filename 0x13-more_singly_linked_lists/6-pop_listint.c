#include "lists.h"

/**
 * pop_listint - deletes the head of te head of the node of linked list
 *
 * @head: pointer to pointer to the head of the list
 *
 * Return: returns the heads node's data.
 *
 */
int pop_listint(listint_t **head)
{
	int xnode;
	listint_t *x;
	listint_t *link;

	if (*head == NULL)
	{
		return (0);
	}

	link = *head;

	xnode = link->n;

	x = link->next;

	free(link);

	*head = x;

	return (xnode);
}
