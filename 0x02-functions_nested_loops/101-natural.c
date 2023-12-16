#include <stdio.h>

/**
 * main -  the 9 times table
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0;
	int i = 1023;

	for (i = 1023; i >= 0; i--)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
