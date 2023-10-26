#include "main.h"

/**
 * get_bit - Get the bit object
 * @n: unsigned long int
 * @index: starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occurred 
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
unsigned long int bit;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1UL << index;
bit = (n & mask) >> index;

return (bit);
}
