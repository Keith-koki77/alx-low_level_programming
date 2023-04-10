#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: binary
 *
 * Return: unsigned integer.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int y;

	if (!b)
		return (0);

	for (y = 0; b[y] != '\0'; y++)
	{
		if (b[y] == '0')
		{
			x = x << 1;
		}
		else if (b[y] == '1')
		{
			x = (x << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (x);
}
