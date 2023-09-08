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
printf("");
scanf("%i", &n);
if (n > 0)
{
printf("%i is positive", n);
}
else if (n < 0)
{
printf("%i is negative", n);
}
if (n == 0)
{
printf("%i is zero", n);
}
return (0);
}
