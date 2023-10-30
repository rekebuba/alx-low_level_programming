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
        ssize_t to_read, to_write;
        char buffer[letters + 1];
        if (filename == NULL)
        {
            return (0);
        }
        file = fopen(filename,  O_RDONLY);
        if (file == NULL)
        {
            return (0);
        }
        to_read = fread(buffer, sizeof(char), letters, file);
        if (to_read < 0) 
        {
            fclose(file);
            return (0);
        }
        buffer[to_read] = '\0';
        to_write = fwrite(buffer, sizeof(char), to_read, stdout);
        if (to_write != to_read)
        {
            fclose(file);
            return (0);
        }
        fclose(file);
        return (to_write);
}
