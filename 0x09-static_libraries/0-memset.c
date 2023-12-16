#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * Return: 0
 * @s: is pointer
 * @b: is pointer
 * @n: integer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
