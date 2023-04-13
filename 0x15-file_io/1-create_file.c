#include "main.h"

/**
 * create_file - function that creats a file
 * @filename: name of the file to be created.
 * @text_content: string to write to the file @filemname
 *
 * Return: 1 on sucess, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fp, written, len;

	written = len = fp = 0;

	if (!filename)
	{
		return (-1);
	}

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fp < 0)
	{
		return (-1);
	}

	while (text_content && text_content[len])
	{
		len++;
	}

	written = write(fp, text_content, len);

	if (written < 0)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
