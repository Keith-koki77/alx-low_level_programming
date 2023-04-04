#include "lists.h"

/**
 * add_noteint - adds a new node at the beginning of linked list
 *
 * @head: pointer to the pointer to the head of the list
 * @n: n elements
 *
 * Return: address of the new element, NULL if failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 = malloc(sizeof(listint_t));

	if (node1 == NULL)
	{
		return (NULL);
	}

	node1->n = n;
	node1->next = *head;
	*head = node1;

	return (*head);
}
