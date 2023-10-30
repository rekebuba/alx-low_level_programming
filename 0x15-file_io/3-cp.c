#include "main.h"

int main(int argc, char *argv[])
{
    int file1, file2, file1_close, file2_close, to_read, to_write;
    char *file_from;
    char *file_to;
    char buffer[1024];
    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        return (97);
    }
    file_from = argv[1];
    file_to = argv[2];
    file1 = open(file_from, O_CREAT | O_RDONLY, 664);
    if (file1 == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", file_from);
        return (98);
    }
    file2 = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 664);
    if (file2 == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", file_to);
        return (99);
    }
    to_read = read(file1, buffer, 1024);
    to_write = write(file2, buffer, to_read);

    file1_close = close(file1);
    if (file1_close != 0)
    {
        dprintf(2, "Error: Can't close fd %i\n", file1_close);
        return (100);
    }
    file2_close = close(file2);
    if (file2_close != 0)
    {
        dprintf(2, "Error: Can't close fd %i\n", file2_close);
        return (100);
    }
    return (to_write);
}