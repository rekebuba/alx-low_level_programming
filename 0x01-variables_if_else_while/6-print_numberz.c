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

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
