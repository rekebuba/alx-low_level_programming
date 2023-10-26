#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
    int len = 0;
    int position = 1;
    unsigned int sum = 0;
    int i;
    if (b == NULL)
    {
        return (0);
    }
    while (b[len] != '\0')
    {
        if (b[len] != 0 && b[len] != 1)
        {
            return (0);
        }
        len++;
    }
    for (i = len; i > 0; i--)
    {
        sum += (b[i] - '0') * position;
        position *= 2;
    }
    return (sum);
}