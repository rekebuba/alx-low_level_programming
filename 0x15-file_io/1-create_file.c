#include "main.h"

int create_file(const char *filename, char *text_content)
{
    int file, n;
    int len = strlen(text_content);
    if(filename == NULL)
        return (-1);
    if (!text_content)
	{
		file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (file == -1)
			return (-1);
		close(file);
		return (1);
	}

    file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (file == -1)
        return (-1);

    n = write(file, text_content, len);
    if (n == -1)
        return (-1);

    close(file);

    return (1);
}
