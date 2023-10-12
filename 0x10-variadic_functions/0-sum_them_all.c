#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of argument.
 * @n: unsigned int.
 * @...: shows the rest of argument
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list argument;
va_start(argument, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(argument, int);
}
va_end(argument);
return (sum);
}
