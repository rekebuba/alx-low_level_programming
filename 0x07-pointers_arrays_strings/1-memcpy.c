#include "main.h"

/**
* _memset - function that copies memory area.
* Return: 0
* @dest: is pointer
* @src: is pointer
* @n: integer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; n++)
{
dest[i] = src[i];
}
return (dest);
}
