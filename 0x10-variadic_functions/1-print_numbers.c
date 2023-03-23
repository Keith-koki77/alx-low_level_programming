#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: the string to be printed between the numbers.
 * @n: number of integers passed to the function.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t x;
	va_list print_num;

	va_start(print_num, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(print_num, int));


		if (x < (n - 1) && separator)
			printf("%s", separator);
		}

	printf("\n");
	va_end(print_num);
}
