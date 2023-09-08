#include <stdio.h>
/**
 * main -
 * print whether the number stored in the variable n is positive or negative.
 *
 * Return: Always 0
 */
int main(void)
{
int n;
scanf("%i", &n);
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
return (0);
}
