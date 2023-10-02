#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int i;
int sum = 0;
if (argc - 1 == 0)
{
printf("0\n");
return (1);
}
for (i = 1; i < argc; i++)
{
if (isdigit(*argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%i\n", sum);
return (0);
}
