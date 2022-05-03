#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: the file to be read
 * @letters: the number of letters it
 * could read and print
 *
 * Return: Actual number of letters it could
 * read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
