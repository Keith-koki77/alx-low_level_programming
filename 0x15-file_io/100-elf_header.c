#include "main.h"
#include <elf.h>
#include <unistd.h>
#include <string.h>

/**
 * display_error - a function that displays error message.
 * @msg: pointer to character connstant of the function.
 *
 * Return: exit(98);
 */
void display_error(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/**
 * read_elf_header - a function that checks existence of elf file.
 * @ehdr: pointer to array containing ELF magic numbers
 *
 */
void read_elf_header(unsigned char *ehdr)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (ehdr[idx] != 127 && ehdr[idx] != 69 && ehdr[idx] != 76 && ehdr[idx] != 70)
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - function that prints numbers of an ELF file
 * @e_ident: pointer to an array containg ELF magic numbers
 */
void print_magic(unsigned char *e_ident)
{
	int x;

	printf("Magic: ");

	for (x = 0; x < EI_NIDENT; x++)
	{
		printf("%02x", e_ident[x]);

		if (x != EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * print_class - prints the class of an EFL header file.
 * @e_ident: pointer to an array having ELF class.
 */
void print_class(unsigned char *e_ident)
{
	printf("Class:                       ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - function that prints data of the ELF header.
 * @e_ident: pointer tob array containing ELF class.
 */
void print_data(unsigned char *e_ident)
{
	printf("Data:                        ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * print_version - function that prints version of ELF header.
 * @e_ident: pointer to array containing ELF version
 */
void print_version(unsigned char *e_ident)
{
	printf("Version:                     %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf(" (unknown)\n");
			break;
	}
}














































