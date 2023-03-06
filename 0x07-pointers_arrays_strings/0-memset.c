#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: stsrting address of the memory to be filled
 * @b: the desired value
 * @n: the number of bytes
 * Return: changed array with new avalue for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
