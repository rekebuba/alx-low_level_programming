#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, doe not add anything to the file. Return 1 if
 * the file exists and -1 if the file does not exist or if you do
 * not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int file, to_write;

	if (!filename)
		return (-1);

	/* Checks if file does not exist */
	if (access(filename, F_OK) == -1)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		to_write = write(file, text_content, len);
		if (to_write == -1)
			return (-1);
	}

	close(file);
	return (1);
}
