#include "main.h"

/**
 * append_text_to_file - A funcion that appends
 * text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add
 * at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rw = write(fd, text_content, nletters);

		if (rw == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
