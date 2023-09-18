#include "main.h"

/**
* swap_int - swaps the values of two integers.
* Return: 0
* @a: is uppercase
* @b: integer
*/

void swap_int(int *a, int *b)
{
int k;
k = *a;
*a = *b;
*b = k;
}
