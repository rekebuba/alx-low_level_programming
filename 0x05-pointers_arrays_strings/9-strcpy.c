#include "main.h"
#include <string.h>

/**
* _strcpy - prints n elements of an array of integers
* @dest: is character
* @src: is a character
* Return: 0
*/

char *_strcpy(char *dest, char *src)
{
dest = strcpy(dest, src);
return dest;
}
