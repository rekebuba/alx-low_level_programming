#include "main.h"

/**
 * main - returns the natural square root of a number.
 *@n: integer
 * Return: Always 0.
 */

int is_prime_number(int n)
{
    int factor;
    factor = 1;
    
    if (n == 1)
    {
        return 0;
    }
    else
    {
        return 0;
    }
    if(n % is_prime_number(n - 1) == 0)
    {
        factor++;
    }
    if (factor == 1)
    {
        return 1;
    }
}
