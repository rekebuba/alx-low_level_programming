#include <stdio.h>

/**
 * main - draws a straight line
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
long long int num = 612852475143;
for (i = 0; i < 10; i++)
{
if (num % i == 0)
{
printf("%d", i);
}
}
return (0);
}
