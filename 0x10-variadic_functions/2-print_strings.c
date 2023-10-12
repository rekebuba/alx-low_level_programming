#include "variadic_functions.h"
#include <stdio.h>
#include <Stdarg.h>

/**
 * print_strings
 * @separator: character
 * @n: unsigned int
 * @...: list of argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list(arg);
va_start(arg, n);

for (i = 0; i < n; i++)
{
str = va_arg(arg, char *);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("nil");
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(arg);
}
