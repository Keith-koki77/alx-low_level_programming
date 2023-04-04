#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: head of list
 * @idx: index of the list where new node is added
 * @n: integer datatype
 *
 * Return: address of new node, or NULL if it failed.
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *node1, *h;

	h = *head;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && h != NULL; x++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
	{
		return (NULL);
	}

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
	{
		return (NULL);
	}

	node1->n = n;

	if (idx == 0)
	{
		node1->next = *head;
		*head = node1;
	}
	else
	{
		node1->next = h->next;
		h->next = node1;
	}
	return (node1);
}
