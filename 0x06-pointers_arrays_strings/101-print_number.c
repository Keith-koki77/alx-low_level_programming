#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer params
 *
 * Return: 0
 */
void print_number(int n)
{
	unsigned int x1;

	x1 = n;

	if (x < 0)
	{
		_putchar('-');
		x1 = -n;
	}

	if (x1 / 10 != 0)
	{
		print_number(x1 / 10);
	}
	_putchar((x1 % 10) + '0');
}
