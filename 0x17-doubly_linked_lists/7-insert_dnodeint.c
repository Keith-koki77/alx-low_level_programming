#include "lists.h"

/**
 * create_new_node - function that creates a new node for dlistint list.
 * @n: value to be added to the linked list.
 *
 * Return: pointer to a new node.
 */
dlistint_t *create_new_node(int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - function that add a new node at given position.
 * @h: pointer to pointer to the linked list.
 * @idx: position at which new node is to be added.
 * @n: value set to the new node.
 *
 * Return: address of the new node or NULL if fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		dlistint_t *new_node = create_new_node(n);

		if (new_node != NULL)
		{
			new_node->next = *h;
			if (*h != NULL)
				(*h)->prev = new_node;
			*h = new_node;
		}
		return (new_node);
	}

	dlistint_t *current = *h;
	unsigned int count = 0;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (NULL);

	dlistint_t *new_node = create_new_node(n);

	if (new_node != NULL)
	{
		new_node->prev = current;
		new_node->next = current->next;
		current->next->prev = new_node;
		current->next = new_node;
	}

	return (new_node);
}
