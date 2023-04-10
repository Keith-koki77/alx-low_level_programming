#include "main.h"

/**
 * clear_bit - clears the bit value to 0
 *
 * @n: pointer of unsigned long integer
 * @index: index of the bi value.
 *
 * Return: 1 if it worked, -1 if an error occured.
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 64)
	{
		return (-1);
	}

	x = 1 << index;

	if (*n & x)
	{
		*n ^= x;
	}

	return (1);
}
