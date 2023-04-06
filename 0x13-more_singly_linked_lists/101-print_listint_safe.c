#include "lists.h"

/**
 * free-listp - frees a linked list
 * @head: head of linked list
 *
 * Return: nothing.
 *
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a lnked list
 * @head: head of linked list
 *
 * Return: number of nodes in the list
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numnodes = 0;
	listp_t *ptr, *node1, *node2;

	ptr = NULL;

	while (head != NULL)
	{
		node1 = malloc(sizeof(listp_t));

		if (node1 == NULL)
			exit(98);

		node1->p = (void *)head;
		node1->next = ptr;
		ptr = node1;

		node2 = ptr;

		while (node2->next != NULL)
		{
			node2 = node2->next;

			if (head == node2->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (numnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		numnodes++;
	}

	free_listp(&ptr);
	return (numnodes);
}
