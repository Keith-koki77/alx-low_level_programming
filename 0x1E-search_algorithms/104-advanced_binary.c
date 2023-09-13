#include "search_algos.h"

int recursive_binary(int *array, int low, int high, int value);

/**
 * advanced_binary - function that searches through an array
 * using the advanced binary algorithm
 * @array: pointer to the array
 * @size: size of the array to be searched
 * @value: value in the array to be sorted.
 *
 * Return: the index where the value is located. Else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary(array, value, low, high));
}

/**
 * recursive_binary - function that searches through an array
 * using the recursive binary algorithm
 * @array: pointer to array
 * @low: first position on the array
 * @high: last position on the array
 * @value: value in the array to be sorted
 *
 * Return: Index where the value is located, else -1
 */
int recursive_binary(int *array, int low, int high, int value)
{
	size_t mid;
	int i;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");

	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (recursive_binary(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (recursive_binary(array, value,
							low, mid));
	}

	return (-1);
}
