#include <stdio.h>
/**
 * main - prints the alphabet in lowercase & uppercase.
 *
 * Return: Always 0
 */
int main(void)
{
char lowercase, uppercase, newline;
lowercase = 'a';
uppercase = 'A';
newline = '\n';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar(newline);
return (0);
}
