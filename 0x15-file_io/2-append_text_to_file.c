#include "main.h"


/**
 * _strlen - find the length of the string
 * @s: the string
 * Return: int
 */
int _strlen(char *s)
{
int count = 0;
while (s[count] != '\0')
{
count++;
}
return (count);
}

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
int file, write_file;
if (filename == NULL)
{
return (-1);
}
if (access(filename, F_OK) != 0)
{
return (-1);
}
file = open(filename, O_RDONLY | O_APPEND, 0600);
if (file == -1)
{
return (-1);
}
lseek(file, 0L, SEEK_END); /* Go to the end of the file*/
if (text_content == NULL)
{
return (-1);
}
write_file = write(file, text_content, _strlen(text_content));
if (write_file == -1)
{
return (-1);
}
close(file);
return (1);
}
