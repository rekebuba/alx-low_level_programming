#include "main.h"
/**
 * main - prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char a = 'a';
int num = 0;
while(num < 10)
{
while(a <= 'z')
{
_putchar(a);
a++;
}
a = 'a';
num++;
}
_putchar('/n');
return (0);
}
