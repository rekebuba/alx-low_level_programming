#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse,
 * Return: 0
 * @s: is string
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
