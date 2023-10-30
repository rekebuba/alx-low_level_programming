#include "main.h"

/**
* read_textfile - a function that reads a text file and prints it to STDOUT
* @filename: the name of the file
* @letters: the number of letters it should read and print
*
* Return: returns the actual number of letters it could read and print
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
        FILE *file;
        ssize_t to_read, to_write;
        char *buffer;
        if (filename == NULL)
        {
            return (0);
        }
        file = fopen(filename,  O_RDONLY);
        if (file == NULL)
        {
            return (0);
        }
        buffer = malloc((sizeof(char) * letters));
        to_read = fread(buffer, sizeof(char), letters, file);
        to_write = fwrite(buffer, sizeof(char), to_read, stdout);
        if (to_write != to_read)
        {
            fclose(file);
            return (0);
        }
        free(buffer);
        fclose(file);
        return (to_write);
}
