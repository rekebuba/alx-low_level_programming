#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
char letter = 'z';
char newline = '\n';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar(newline);
return (0);
}
