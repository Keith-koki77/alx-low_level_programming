#include "main.h"
#include <stdlib.h>
/**
* _calloc - function that allocates memory for an array, using malloc
* @nmemb: number of elements of array
* @size: size of element of array
* Return: pointer to the allocated memory or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int num;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == 0)
		return (NULL);

	for (num = 0; num < nmemb * size; num++)
		ptr[num] = 0;

	return ((void *)ptr);
}
