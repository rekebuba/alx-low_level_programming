#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * Return: 0
 * @dest: is pointer
 * @src: is pointer
 * @n: integer
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
