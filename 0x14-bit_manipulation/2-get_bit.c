#include "main.h"

/**
 * get_bit - Get the bit object
 * @n: unsigned long int
 * @index: starting from 0 of the bit you want to get
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
