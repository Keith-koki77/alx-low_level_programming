#include "search_algos.h"

int binary_search_expo(int *array, int low, int high, int value);

/**
 * exponential_search - function that searches for values in a
 * sorted array using exponential search algorithm
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to be searched for in the array
 *
 * Return: the value of the index where it's located
 * in the array, otherwise if the value isn't available or array
 * is NULL then the code returns -1.
 *
 */

int exponential_search(int *array, size_t size, int value)
{
	int range;
	int low, high;


	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	range = 1;
	while (range < (int)size && array[range] < value)
	{
		printf("Value checked array[%d] = [%d]\n", range, array[range]);
		range *= 2;
	}

	low = range / 2;
	high = (range < (int)size) ? range : (int)size - 1;

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	return (binary_search_expo(array, low, high, value));
}

/**
 * binary_search_expo - helper function to the exponential search
 * algo which searches for the vakue using binary search algo.
 * @array: pointer tonthe array
 * @low: first position in the array
 * @high: last positiion in the array
 * @value: value to be searched for in the array.
 *
 * Return: index where the value is located, otherwise -1 if array
 * is NULL or value isn't available in the array.
 */

int binary_search_expo(int *array, int low, int high, int value)
{
	int mid, i;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
