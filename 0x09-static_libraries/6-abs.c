#include "main.h"
/**
 * _abs - checks for alphabetic character.
 *@i: the character
 * Return: absolute value of number or zero.
 */
int _abs(int i)
{
if (i >= 0)
{
return (i);
}
if (i < 0)
{
return (i * -1);
}
return (0);
}
