#include "main.h"

#define BUFSIZE 1024

static ssize_t read_file(char *file, char **buff, int fd);
static void write_copy(char *file, int fd, char *buff, int len);
/**
 * main - this program copies content of one file to another
 * @argc: number of arguments.
 * @argv: argument values.
 *
 * Return: 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	int fd, fd_1, rd, wr;
	char *buff, *file_1, *file_2;

	buff = NULL;
	rd = 1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_1 file_2\n");
		exit(97);
	}

	file_1 = argv[1];
	file_2 = argv[2];
	fd = open(file_1, O_RDONLY);
	fd_1 = open(file_2, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
		/*Read content from the first file*/
		rd = read_file(file_1, &buff, fd);

		if (!rd)
			break;
		/*Write buffer to target file*/
		write_copy(file_1, fd_1, buff, rd);
	}

	free(buff);
	wr = close(fd);

	if (wr < 0)
	{
		dprintf(STDERR_FILENO, "Error: cant't close fd %d\n", fd);
		exit(100);
	}
	wr = close(fd_1);
	if (wr < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_1);
		exit(100);
	}
	return (0);
}

/**
 * read_file - function that a file into a buffer.
 * @file: file to read form.
 * @buff: pointer to pointer to a buffer.
 * @fd: file description.
 *
 * Return:  the buffer's current size.
 *
 */
static ssize_t read_file(char *file, char **buff, int fd)
{
	int rd;

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file);
		exit(98);
	}

	if (!(*buff))
		*buff = malloc(sizeof(char) * BUFSIZE);
	if (!(*buff))
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file);
		exit(98);
	}

	rd = read(fd, *buff, BUFSIZE);
	if (rd < 0)
	{
		free(*buff);
		dprintf(STDERR_FILENO, "Error: cant't read from file %s\n", file);
		exit(98);
	}
	return (rd);
}

/**
 * write_copy - writes the buffer to a file.
 * @file: the destinated file of the buffer contents.
 * @fd: file descriptor of @fd.
 * @buff: pointer to buffer.
 * @len: length of current buffer.
 */
static void write_copy(char *file, int fd, char *buff, int len)
{
	if (fd < 0 || !buff)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}

	if (write(fd, buff, len) < 0)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
}
