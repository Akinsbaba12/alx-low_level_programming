#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the head of a filename.
 * @letters: pointer to the head of numbers of letters printed.
 *
 * Return: numbers of letters printed. If failed, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nd);

	close(fd);

	free(buf);

	return (nwr);
}
