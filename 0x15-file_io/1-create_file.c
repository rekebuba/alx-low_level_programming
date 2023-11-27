#include "main.h"

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
int file, n;
int count = 0;
if (filename == NULL)
return (-1);
if (!text_content)
{
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file == -1)
return (-1);
close(file);
return (1);
}

file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file == -1)
return (-1);

while (text_content[c])
count++;

n = write(file, text_content, count);
if (n == -1)
return (-1);

close(file);

return (1);
}
