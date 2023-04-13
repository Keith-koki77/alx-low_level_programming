#include "main.h"

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
	int fd, fd_1, cl;
	ssize_t wr, rd_len;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: copy file_from file_to\n"), exit(97);

	fd = open(argv[1], O_RDONLY); /*opens file_from*/

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664); /*opens file_to*/
	if (fd < 0)
		dprintf(STDERR_FILENO, "Error: can't write to file %s\n", argv[2]), exit(99);

	while (rd_len > 0)
	{
		rd_len = read(fd, buff, 1024);

		if (rd_len < 0)
		{
			dprintf(2, "Error: can't read from file %s\n", argv[1]), exit(98);
			return (0);
		}

		wr = write(fd_1, buff, rd_len);

		if (wr < 0)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]), exit(99);
			return (0);
		}
	}

	cl = close(fd);
	if (cl < 0)
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd), exit(100);
	cl = close(fd_1);
	if (cl < 0)
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_1), exit(100);

	return (0);
}
