#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: counts the arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	
	printf("%i\n", argc - 1);

	return (0);
}
