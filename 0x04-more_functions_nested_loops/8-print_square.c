#include "main.h"

/**
 * print_square - draws a straight line
 *@size: integer.
 * Return: Always 0.
 */
void print_square(int size)
{
	int k, j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else if (size <= 0)
	{
		_putchar('\n');
	}
}
