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

int append_text_to_file(const char *filename, char *text_content)
{
    int file , write_file;
    if (filename == NULL)
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
    write_file = (file, text_content, _strlen(text_content));
    if (write_file == -1)
    {
        return (-1);
    }
    close(file);
    return (1);
}
