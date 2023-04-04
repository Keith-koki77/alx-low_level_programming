#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list
 *
 * Return: returns void
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *link;

	if (head != NULL)
	{
		link = *head;

		while ((temp = link) != NULL)
		{
			link = link->next;
			free(temp);
		}
		*head = NULL;
	}
}
