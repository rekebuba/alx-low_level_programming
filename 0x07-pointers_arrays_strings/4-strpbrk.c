#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * Return: 0
 * @s: is pointer
 * @accept: is pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
