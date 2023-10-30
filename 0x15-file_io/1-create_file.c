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
* create_file - a function that creates a file
* @filename: the name of the file to create
* @text_content: a NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure (file can not be created,
* file can not be written, write “fails”, etc…)
* if filename is NULL return -1
*/
int create_file(const char *filename, char *text_content)
{
int file;
size_t bite = 0, len = _strlen(text_content);
if (filename == NULL)
{
return (-1);
}
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
{
return (-1);
}
if (len)
{
write(file, text_content, len);
}
return (bite == len ? 1 : -1);
}
