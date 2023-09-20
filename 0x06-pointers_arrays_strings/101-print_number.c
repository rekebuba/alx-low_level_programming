#include "main.h"

/**
* print_number - updates the value it points to to 98.
* Return: 0
* @num: is an integer.
*/

void print_number(int num)
{
int reverse = 0;
if (num < 0) 
{
putchar('-');
num = -num;
}
if (num == 0) 
{
putchar('0');
}
while (num > 0) 
{
reverse = reverse * 10 + (num % 10);
num /= 10;
}
while (reverse > 0) 
{
putchar(reverse % 10 + '0');
reverse /= 10;
}
}
