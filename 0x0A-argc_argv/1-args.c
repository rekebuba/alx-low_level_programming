#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main (int argc , char *argv[] __attribute__((unused)))
{
(void) argv; /*Ignore argv*/
printf("%i\n", argc - 1);
return (0);
}
