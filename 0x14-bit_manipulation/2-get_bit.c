#include "main.h"

/**
 * get_bit - Get the bit object
 *
 * @n:
 * @index:
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int buffer[64];
    int i = 0;
    if (index >= sizeof(unsigned long int) * 8)
    {
        return (-1);
    }
    
    while (n > 0)
    {
        buffer[i] = (n & 1) ? 1 : 0;
        n = n >> 1;
        i++;
    }
    return (buffer[index]);
}