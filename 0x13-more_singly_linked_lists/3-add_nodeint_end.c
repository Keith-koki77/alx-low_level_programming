#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 *
 * @head: pointer to pointer to the head of the list
 * @n: n element
 *
 * Return: address of the new element, NULL if it failed
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1;
	listint_t *temp;

	node1 = malloc(sizeof(listint_t));

	if (node1 == NULL)
	{
		return (NULL);
	}

	node1->n = n;
	node1->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = node1;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node1;
	}
	return (*head);
}
