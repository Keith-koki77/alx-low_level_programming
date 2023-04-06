#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of linked list
 *
 * Return: nothing
 *
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *crr;

	if (head != NULL)
	{
		crr = *head;

		while ((tmp = crr) != NULL)
		{
			crr = crr->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list
 * @h: head of a list.
 *
 * Return: size of the freed list
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t numnodes = 0;
	listp_t *ptr, *node1, *node2;
	listint_t *crr;

	ptr = NULL;

	while (*h != NULL)
	{
		node1 = malloc(sizeof(listp_t));

		if (node1 == NULL)
			exit(98);

		node1->p = (void *)*h;
		node1->next = ptr;
		ptr = node1;

		node2 = ptr;

		while (node2->next != NULL)
		{
			node2 = node2->next;

			if (*h == node2->p)
			{
				*h = NULL;
				free_listp2(&ptr);
				return (numnodes);
			}
		}

		crr = *h;
		*h = (*h)->next;
		free(crr);
		numnodes++;
	}

	*h = NULL;
	free_listp2(&ptr);
	return (numnodes);
}
