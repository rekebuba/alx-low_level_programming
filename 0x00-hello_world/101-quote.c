#include <stdio.h>
#include <unistd.h>
/**
 * main - it prints a string of output
 *
 * Return: Always 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
