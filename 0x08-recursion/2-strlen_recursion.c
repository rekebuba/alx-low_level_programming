#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
_strlen_recursion(s + 1);
}
return ();
}
