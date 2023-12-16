#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';
	char newline = '\n';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar(newline);
	return (0);
}
