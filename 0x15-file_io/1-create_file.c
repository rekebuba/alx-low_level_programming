#include "main.h"

int create_file(const char *filename, char *text_content)
{
    int file;
    if(filename == NULL)
        return (-1);
    file = open(filename, O_CREAT | O_RDWR | O_APPEND);
    if (file == -1)
        return (-1);
    return (1);
}
