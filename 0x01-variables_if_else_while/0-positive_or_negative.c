#include <stdio.h>
/**
 * main -
 * print whether the number stored in the variable n is positive or negative.
 *
 * Return: Always 0
 */
int main(void)
{
long int n;
scanf("%li", &n);
if (n > 0)
{
printf("%li is positive\n", n);
}
else if (n < 0)
{
printf("%li is negative\n", n);
}
else if (n == 0)
{
printf("%li is zero\n", n);
}
return (0);
}
