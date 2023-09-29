#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: string
 * return - 0.
 */

int _strlen_recursion(char *s)
{
static int sum;
sum = 0;
if (*s != '\0')
{
sum++;
_strlen_recursion(s + 1);
}
return (sum);
}
