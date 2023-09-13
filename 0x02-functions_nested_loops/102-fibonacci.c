#include <stdio.h>

/**
 * main -  the 9 times table
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;
    int add;
    int i;
    for (i = 1; i <= 50; i++)
    {
        if (i == 1 || i == 2)
        { 
            printf("%d, ", i);
        }
        sum = i + (i - 1);
        add = sum + (i - 1);       
        printf("%d, ", add);
    } 
}