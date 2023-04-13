#include "main.h"

/**
 * append_text_to_file - append text to end of the file
 * @filename: name of file to write into.
 * @text_content: text to append to file.
 *
 * Return: Always 1 on sucess, -1 on failure.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t len;

	if (!filename)
	{
		return (-1);
	}

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp < 0)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = write(fp, text_content, strlen(text_content));

		if (len < 0)
		{
			return (-1);
		}
	}
	close(fp);

	return (1);
}
