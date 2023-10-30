#include "main.h"

void free_close(char **buf, int *fd1, int *fd2);

/**
* main - a program that copies the content of a file to another file
* @argc: the number of cmd-line arguments
* @argv: argv[1] (source file), argv[2] (destination file)
* Return: returns (0) success, exits on error
*/
int main(int argc, char *argv[])
{
    int file1, file2, to_read, to_write;
    char *file_from, *file_to, *buffer;
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return (97);
    }
    file_from = argv[1];
    file_to = argv[2];
    file1 = open(file_from, O_RDONLY);
    if (file1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return (98);
    }
    file2 = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
    if (file2 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        return (99);
    }
    buffer = malloc(sizeof(char) * 1024);
    if (buffer == NULL)
        return (-1);
    to_read = read(file1, buffer, 1024);
    if (to_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return (98);
    }
    to_write = write(file2, buffer, to_read);
    if (to_write != to_read)
    {
        dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
        return (99);
    }
    free_close(buffer, file1, file2);
    return (0);
}

/**
* free_close - free malloc'd memory and closes opened files
* @buffer: pointer to the string buffer
* @file1: pointer to the file1
* @file2: pointer to file2
* Return: returns nothing
*/
void free_close(char **buffer, int *file1, int *file2)
{
	int n, n1;

	free(*buffer);
	n = close(*file1);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *file1);
		exit(100);
	}
	n1 = close(*file2);
	if (n1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *file2);
		exit(100);
	}
}