#include <stdio.h>
/**
 * main - it prints different combinations of two digits.
 * 
 * Return: Always 0
 */
int main(void)
{
int i, j;
for (i = '0'; i <= '8'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (i != '8' || j != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
