#include <stdio.h>
/**
 * main - prints the alphabet in letter.
 *
 * Return: Always 0
 */
int main(void)
{
	char letter, newline;

	letter = 'a';
	newline = '\n';
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar(newline);
	return (0);
}
