#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
}
int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
largest = a;
}
else if (b > a && b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
#endif /* MAIN_H */
