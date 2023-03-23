#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of arguments passed.
 *
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	size_t result = 0, x;
	va_list sum;

	va_start(sum, n);

	if (n == 0)
		return (0);
	for (x = 0; x < n; x++)
	{
		result += va_arg(sum, int);
	}

	va_end(sum);

	return (result);
}
