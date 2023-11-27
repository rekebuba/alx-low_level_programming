#include "main.h"

/**
 * read_textfile -
 *
 * @filename:
 * @letters:
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t to_read, to_write;
    char *buffer;
    int file;

    if (!filename)
		return (0);
    
    file = open(filename, O_RDONLY);
    if (file == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);

    to_read = read(file, buffer, letters);

    to_write = write(STDOUT_FILENO, buffer, to_read);
    if (to_read != to_write)
        return (0);

    free(buffer);
    close(file);

    return (to_read);
}
