#include "main.h"

/**
 * @brief: prints a string, followed by a new line.
 * @param s 
 */
void _puts_recursion(char *s)
{
    _putchar(*s);
    s ++;
    if (*s != '\0')
    {
        _puts_recursion(s);
    }
}