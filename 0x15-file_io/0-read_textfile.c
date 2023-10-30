#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * 
 * @filename:
 * @letters:
 * Return: ssize_t 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        FILE *file;
        ssize_t to_write;
        if (filename == NULL)
        {
            return (0);
        }
        file = fopen(filename,  O_RDONLY);
        if (file == NULL)
        {
            return (0);
        }
        to_write = fwrite(file, sizeof(char), letters, stdout);
        fclose(file);
        return (to_write);
}
