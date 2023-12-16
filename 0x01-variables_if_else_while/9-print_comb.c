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

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
