#include "main.h"

/**
 * set_bit - sets the value of bit to 1 at an index.
 * @n: pointer to an unsigned long integer
 * @index: index of bit.
 *
 * Return: 1 if it worked, -1 if an error occured.
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 64)
	{
		return (-1);
	}
	x = 1 << index;
	*n = (*n | x);

	return (1);
}
