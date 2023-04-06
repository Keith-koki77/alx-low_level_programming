#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a linked list
 * @head: head of the linked list
 *
 * Return: the address of the node whre the loop starts.
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *link1 = head, *link2 = head;

	while (head && link1 && link1->next)
	{
		head = head->next;
		link1 = link1->next->next;

		if (head == link1)
		{
			head = link2;
			link2 = link1;

			while (1)
			{
				link1 = link2;

				while (link1->next != head && link1->next != link2)
				{
					link1 = link1->next;
				}

				if (link1->next == head)
				{
					break;
				}
				head = head->next;
			}

			return (link1->next);
		}
	}

	return (NULL);
}
