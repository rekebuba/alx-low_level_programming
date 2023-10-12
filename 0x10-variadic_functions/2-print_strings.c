#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string. 
 * 
 * @separator: constant character
 * @n: unsigned int.
 * @...: continuity
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)
{
	char *str = va_arg(arg, char*);
	if (str != NULL)
	{
		printf("%s", str);
	}
	else
	{
		printf("(nil)");
	}
	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
}
printf("\n");
va_end(arg);
}
