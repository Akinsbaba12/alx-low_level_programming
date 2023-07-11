#include "main.h"

/**
 * create_file - function that ceates a file
 * @filename: pointer to the head of filename.
 * @text_content: pointer to the head of content writed in the file.
 *
 * Return: 1 if success. -1 if failed.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int n_letters;
	int rwr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

	rwr = write(file, text_content, n_letters);

	if (rwr == -1)
		return (-1);

	close(file);

	return (1);
}
