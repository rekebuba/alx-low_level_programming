#include "main.h"

/**
 * flip_bits - Write a function that returns
 * the number of bits you would need to flip to
 * get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int XOR = n ^ m;
unsigned int count = 0;

while (XOR != 0)
{
count += XOR & 1;
XOR >>= 1;
}

return (count);
}
