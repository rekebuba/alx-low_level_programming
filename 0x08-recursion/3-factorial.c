#include "main.h"

/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n: string
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n != 0)
	{
		n = n * factorial(n - 1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n);
}
