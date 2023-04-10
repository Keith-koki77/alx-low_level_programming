#include "main.h"

/**
 * get_endianness - checks for endianness
 *
 * Return: 0 (big endian), 1 (little endian)
 *
 */
int get_endianness(void)
{
	unsigned int a;
	char *c;

	a = 1;
	c = (char *)&a;

	if (*c)
	{
		return (1);
	}
	return (0);
}
