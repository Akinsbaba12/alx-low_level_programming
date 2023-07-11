#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the head of a filename.
 * @text_content: pointer to the head of added content.
 *
 * Return: 1 if file exists, -1 if the file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int n_letters;
	int rwr;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (n_letters = 0; text_content[n_letters]; n_letters++)
			;

		rwr = write(file, text_content, n_letters);

		if (rwr == -1)
			return (-1);
	}

	close(file);

	return (1);
}
