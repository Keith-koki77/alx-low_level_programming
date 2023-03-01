#include "main.h"
/**
 * strcat - function that concatenates two strings
 * @dest: input first value
 * @src: input second value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)

		for (b = 0; src[b] != '\0'; b++, a++)
		{
			dest[a] = src[b];
		}
	dest[a] = '\0';
	return (dest);
}
