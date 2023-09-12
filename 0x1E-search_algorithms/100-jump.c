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
	int left;
	int right;
	int i;

	if (array == NULL || size == 0)
		return (-1);

	step = (int)sqrt(size);
	left = 0;
	right = step;

	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	for (i = left; i <= right && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
