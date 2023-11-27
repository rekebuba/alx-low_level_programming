#include "main.h"

/**
* main - a program that copies the content of a file to another file
* @argc: the number of cmd-line arguments
* @argv: argv[1] (source file), argv[2] (destination file)
* Return: returns (0) success, exits on error
*/
int main(int argc, char *argv[])
{
int file_1, file_2, read_from, write_to;
char *file_from = argv[1], *file_to = argv[2];
char *buffer;
if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
file_1 = open(file_from, O_RDONLY);
if (file_1 == -1)
{
dprintf(2, "Error: Can't read from file %s\n", file_from);
exit(98);
}
file_2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_2 == -1)
{
dprintf(2, "Error: Can't write to %s\n", file_to);
exit(99);
}
buffer = malloc(sizeof(char) * BUFFER);
if (!buffer)
return (-1);
do {
read_from = read(file_1, buffer, BUFFER);
if (read_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", file_from);
exit(98);
}
write_to = write(file_2, buffer, read_from);
if (write_to != read_from)
{
dprintf(2, "Error: Can't write to %s\n", file_to);
exit(99);
}
} while (read_from == BUFFER);
free_close(&buffer, &file_1, &file_2);
return (0);
}

/**
* free_close - free malloc'd memory and closes opened files
* @buf: pointer to the string buf
* @fd1: pointer to the fd_from
* @fd2: pointer to fd_to
* Return: returns nothing
*/
void free_close(char **buf, int *fd1, int *fd2)
{
int n, n1;

free(*buf);
n = close(*fd1);
if (n == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd1);
exit(100);
}
n1 = close(*fd2);
if (n1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd2);
exit(100);
}
}
