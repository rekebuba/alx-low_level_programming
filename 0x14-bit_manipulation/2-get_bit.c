#include "main.h"

/**
 * get_bit - Get the bit object
 * @n: unsigned long int
 * @index: starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occurred 
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
n >>= index;
if ((n & 1) == 1)
return (1);
else
return (0);
return (-1);
}
