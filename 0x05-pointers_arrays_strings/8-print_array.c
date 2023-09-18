#include "main.h"
#include <stdio.h>
#include <string.h>


/**
* print_array - prints half of a string, followed by a new line.
* @a: is string
* @n: is integer.
* Return: 0
*/

void print_array(int *a, int n)
{
int k;
for (k = 0; k <= n; k++)
{
printf("%d", a[k]);
if (k != n)
{
printf(", ");
}
}
printf("\n");
}
