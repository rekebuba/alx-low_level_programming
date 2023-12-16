#include "main.h"

/**
 * print_diagonal - draws a straight line
 *@n: integer.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int k = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (k = 0; k < n; k++)
		{
			for (j = 0; j < k; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
