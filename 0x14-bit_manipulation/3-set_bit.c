#include "main.h"

/**
 * set_bit - Set the bit object
 * @n:
 * @index:
 * Return: 1 if it worked, or -1 if an error occurred 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    char *buffer[64];
    unsigned int idx = 0;
    while (*n != 0)
    {
        buffer[idx] = (*n & 1)  ?  '1' : '0';
        *n = (*n >> 1);
        idx++;
    }
    if (index > idx)
    {
        return (-1);
    }
    while (idx != index)
    {
        idx++;
    }
    _putchar(buffer[idx]);
    return (1);
}