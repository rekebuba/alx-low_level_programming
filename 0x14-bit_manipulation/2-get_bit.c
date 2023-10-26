#include "main.h"

/**
 * get_bit - Get the bit object
 * @n:
 * @index: starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occurred 
 */
int get_bit(unsigned long int n, unsigned int index)
{
    char buffer[64];
    unsigned int idx = 0;
    while (n != 0)
    {
        buffer[idx] = (n & 1)  ?  '1' : '0';
        n = (n >> 1);
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