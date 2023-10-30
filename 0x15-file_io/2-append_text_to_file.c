#include "main.h"

int f_exists(const char *filename);

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
	int file, to_write, len = 0;

	if (!filename)
		return (-1);

	/* Checks if file does not exist */
	if (!f_exists(filename))
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

/**
* f_exists - checks if a file exists
* @filename: the name of the file
* Return: returns a non-zero number if it exists and 0 otherwise
*/
int f_exists(const char *filename)
{
	struct stat buffer;

	return (stat(filename, &buffer) == 0);
}