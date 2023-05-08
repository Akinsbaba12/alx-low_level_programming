#include "main.h"
#include <unistd.h>
/**
 * create_file - Creating a a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @text_content: Text content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int eli, jah, len = 0;

	if (filename == NULL)
		return (-1);

	eli = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (eli < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	jah = write(eli, text_content, len);
	close(eli);
	if (jah < 0)
		return (-1);
	return (1);
}
