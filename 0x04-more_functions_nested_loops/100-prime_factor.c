#include <stdio.h>
#include <math.h>

/**
 * main - draws a straight line
 *
 * Return: Always 0.
 */

int main(void)
{
long i, max;
long num = 612852475143;
double square =  sqrt(num);

for (i = 1; i < square; i++)
{
if (num % i == 0)
{
max = num / i;
}
}
printf("%ld\n", max);
return (0);
}
