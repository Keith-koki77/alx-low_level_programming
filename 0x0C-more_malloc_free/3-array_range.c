#include "main.h"
#include <stdlib.h>
/**
* array_range - function that creates an array of integers
* @min: first and minimum value of the array to be created
* @max: last and maximum value of the array to be created
* Return: pointer to the newly created array or NULL
*/
int *array_range(int min, int max)
{
	int *ptr;
	int num, n;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (num = 0; num < n; num++)
		ptr[num] = min + num;

	return (ptr);
}
