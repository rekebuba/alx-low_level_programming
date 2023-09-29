#include "main.h"
#include <string.h>

/**
 * is_palindrome - returns the natural square root of a number.
 *@s: string
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
    int len = strlen(s);
    if (len == 0 || len == 1)
    {
        return 1;
    }
    if (s[0] != s[len - 1])
    {
        return 0;
    }
    if (s[0] == s[len - 1])
    {
        return 1;
    }
    is_palindrome(s + 1);
}
