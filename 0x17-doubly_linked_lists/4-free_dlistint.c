#include "lists.h"

/**
 * free_dlistint - function that freesa dlistint_t list.
 * @head: pointer to dlistint.
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_dlistint(head->next);
	free(head);
}
