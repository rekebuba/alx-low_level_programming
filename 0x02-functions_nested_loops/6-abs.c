#include "main.h"
/**
 * main - checks for alphabetic character.
 *
 * Return: Always 0.
 */
int _abs(int i)
{
if (i >= 0)
{
return (i);
}
if (i < 0)
{
return (_abs(i));
}
return (0);
}
