#include "main.h"

/**
 * set_bit - Set the bit object
 * @n: unsigned long int
 * @index: a place holder
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

unsigned long int mask = 1UL << index;
*n |= mask;

return (1);
}
