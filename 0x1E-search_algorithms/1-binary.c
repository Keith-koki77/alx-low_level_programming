#include "search_algos.h"

/**
 * binary_search - function that searches for vakues in
 * an array using binary algorithm method.
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to be searched.
 *
 * Return: -1 if failed.
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
