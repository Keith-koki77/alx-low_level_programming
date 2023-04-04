#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at  index of linked list
 *
 * @head: pointer to pointer to the head of link list
 * @index: index position of deleted node
 *
 * Return: 1 if succeeded, -1 if it failed.
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temp, *next;

	temp = *head;

	if (index != 0)
	{
		for (x = 0; x < index - 1 && temp != NULL; x++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL || (temp->next == NULL && index != 0))
	{
		return (-1);
	}

	next = temp->next;

	if (index != 0)
	{
		temp->next = next->next;
		free(next);
	}
	else
	{
		free(temp);
		*head = next;
	}

	return (1);
}
