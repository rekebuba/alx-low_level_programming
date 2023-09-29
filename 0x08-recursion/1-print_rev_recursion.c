#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string. 
 * @s: string
 * return - int; 
 */

int _strlen_recursion(char *s)
{
    int sum = 0;
    if (s != '\0')
    {
        sum++;   
    }
    return sum;
    _strlen_recursion(s + 1);
}