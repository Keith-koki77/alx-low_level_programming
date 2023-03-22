#include "3-calc.h"

/**
 * main - performs simple arithmetic operations
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 if executed successfully and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int x, y, result, (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	calc = get_op_func(argv[2]);

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = calc(x, y);

	printf("%d\n", result);

	return (0);
}
