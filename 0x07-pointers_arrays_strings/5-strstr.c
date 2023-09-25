#include "main.h"

/**
* _strstr - Write a function that locates a substring.
* Return: 0
* @haystack: is pointer
* @needle: is pointer
*/

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
while(*needle)
{
if (haystack != needle)
{
haystack++;
}
else if (haystack == needle)
{
return (haystack);
haystack++;
needle++;
}
}
}
return (0);
}
