#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elementss of a linked list
 * @h: pointer to the list_t list to print
 *
 * Rerurn: the number of nodes to be counted
 *
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%lu] ", count++);

		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
	}
	return (count);
}
