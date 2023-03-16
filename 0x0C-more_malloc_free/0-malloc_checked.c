#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
* @b: size of memory to be allocated
* Return: pointer to allocated memory on success
* 98 if insufficient memory
*/
void *malloc_checked(unsigned int b)
{
	char *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (pntr);
}
