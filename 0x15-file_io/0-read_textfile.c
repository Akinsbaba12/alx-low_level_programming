#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - A text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: Number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t e, l, i;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	e = open(filename, O_RDONLY);
	l = read(e, buffer, letters);
	i = write(STDOUT_FILENO, buffer, l);

	if (e == -1 || l == -1 || i == -1 || i != l)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(e);

	return (i);
}
