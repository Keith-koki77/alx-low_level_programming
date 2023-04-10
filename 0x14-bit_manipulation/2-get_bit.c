#include "main.h"

/**
 * get_bit - returns the value of binary at given index
 * @index: index of bit
 * @n: unsigned long integer.
 *
 *
 * Return: the value of bit.
 *i
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (x = 0; x < 64; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}
	return (-1);
}
