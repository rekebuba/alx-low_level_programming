#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main (int argc , char *argv[])
{
int a, b;
if (argc - 1 != 2)
{
printf("Error\n");
return 1;
}
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%i\n", a * b);
return (0);
}
