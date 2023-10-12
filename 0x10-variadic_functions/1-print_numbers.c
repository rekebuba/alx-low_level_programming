#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers
 * @separator: character.
 * @n: unsigned int
 * @...: list of argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list(arg);
va_start(arg, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(arg, int));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
}
