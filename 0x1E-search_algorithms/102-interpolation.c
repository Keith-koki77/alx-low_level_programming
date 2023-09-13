#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in
 * an array using interpolation search algorithm.
 * @array: pointer to the array
 * @size: size of the array.
 * @value: value to be searched in the array.
 *
 * Return: -1 iof it fails, otherwise returns value
 * searched.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	int pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] -
						array[low])) * (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);


		if (array[pos] < value)
			low  = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%d] is out of range\n", pos);

	return (-1);
}
