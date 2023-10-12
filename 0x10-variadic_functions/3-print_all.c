#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */


void print_all(const char *const format, ...)
{
int len = 0;
char *str, *step = "";
va_list(arg);
va_start(arg, format);
if (format)
{
while (format[len] != '\0')
{
switch (format[len])
{
case 'c':
printf("%s%c", step, va_arg(arg, int));
break;
case 'i':
printf("%s%d", step, va_arg(arg, int));
break;
case 'f':
printf("%s%f", step, va_arg(arg, double));
break;
case 's':
str = va_arg(arg, char *);
if (str == NULL)
{
printf("(nil)");
}
printf("%s%s", step, str);
break;
default:
len++;
continue;
}
step = ", ";
len++;
}
}
printf("\n");
va_end(arg);
}
