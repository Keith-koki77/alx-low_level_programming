#include "search_algos.h"

/**
 * jump_search - function that searches for value in
 * an array using the jumpsearch algorithm
 * @array: pointer to the array
 * @size: sizze of the array
 * @value: value to be searched.
 *
 * Return: -1 if value not found.
 */

int jump_search(int *array, size_t size, int value)
{
	int step;
	int prev;
	int i;

	if (array == NULL || size == 0)
		return (-1);

	step = 0;
	prev = 0;
	i = 0;

	while (step < (int)size && array[step] < value)
	{
		printf("Value checked array[%i] = [%i]\n", step, array[step]);
		prev = step;
		step += (int)(sqrt(size));
		if (prev >= (int)size)
			return (-1);
	}


	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	if (step > (int)(size - 1))
		step = (int)size - 1;

	for (i = prev; i <= step && array[i] <= value; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
