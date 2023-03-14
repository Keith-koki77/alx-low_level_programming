#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create an array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int num;
	char *word;

	if (size == 0)
		return (NULL);

	word = malloc(sizeof(c) * size);

	if (word == NULL)
		return (NULL);
	for (num = 0; num < size; num++)
		word[num] = c;
	return (word);
}
