#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0, n = 0;

if (!b)
return (0);

while (b[i])
{
if (b[i] == '0' || b[i] == '1')
{
n <<= 1;
n += b[i] - '0';
i++;
}
else
return (0);
}
return (n);
}
