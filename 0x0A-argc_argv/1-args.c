#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: counts argumnets
 * @argv: arguments
 *
 * Return: 0 (succes)
 */
int main(int argc, char *argv[])
{
	(void)argv; /*ignore argv*/

	printf("%i\n", argc - 1);

	return (0);
}
