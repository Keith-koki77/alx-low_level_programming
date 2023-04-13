#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: nummer of letters it should read and print
 * @filename: the name of the file to perform operations on.
 *
 * Return: the actal numbersof letters it could read and print.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fp, buff_size;
	ssize_t letters_read, letters_written;

	buff_size = letters;

	if (!filename || !letters)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);

	if (fp < 0)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		return (0);
	}

	letters_read = read(fp, buf, buff_size);

	if (letters_read < 0)
	{
		free(buf);
		return (0);
	}

	letters_written = write(STDOUT_FILENO, buf, letters_read);

	if (letters_written < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fp);

	return (letters_written);
}
