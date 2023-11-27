#include "main.h"

#define BUFFER 1024

int main(int argc, char *argv[])
{
    char *file_from = argv[1];
    char *file_to = argv[2];
    int file_1, file_2, read_from, write_to;
    char *buffer;
    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }
    if (!file_from)
    {
        dprintf(2, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }
    file_1 = open(file_from, O_RDONLY);

    buffer = malloc(sizeof(char) * BUFFER);
    read_from = read(file_1, buffer, BUFFER);
    if (read_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }
    file_2 = open(file_to, O_CREAT | O_WRONLY | O_APPEND, 0664);
    if (file_2 == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", file_to);
        exit(99);
    }
    write_to = write(file_2, buffer, BUFFER);
    if (write_to == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", file_to);
        exit(99);
    }
    free(buffer);
    close(file_1);
    close(file_2);
    if (file_1 == -1)
    {
        dprintf(2, "Error: Can't close fd %s\n", file_from);
        exit(100);
    }
    else if (file_2 == -1)
    {
        dprintf(2, "Error: Can't close fd %s\n", file_to);
        exit(100);
    }
    return (0);
}