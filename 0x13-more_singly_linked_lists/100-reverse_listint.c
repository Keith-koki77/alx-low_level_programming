#include "lists.h"

/**
 * reverse_listint - reverse a linked list.
 * @head: head of a list.
 *
 * Return: pointer to first node.
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n = *head, *next;

	while (n != NULL)
	{
		next = n->next;
		n->next = p;
		p = n;
		n = next;
	}
	*head = p;
	return (*head);
}
