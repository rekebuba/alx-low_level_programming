#include "main.h"

/**
 * set_bit - Set the bit object
 * 
 * @n:
 * @index:
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1UL << index;
*n |= mask;
return (1);
}