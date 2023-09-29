#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string. 
 * @s: string
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
