#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - it prints all single digit numbers of base 10.
 *
 * Return: Always 0
 */
int main(void)
{
int i = '0';
while (i <= '8')
{
putchar(i);
putchar(',');
putchar(' ');
i++;
}
putchar(i);
return (0);
}
