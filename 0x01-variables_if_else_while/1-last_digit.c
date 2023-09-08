#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - it prints Last digit of a number.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
scanf("%d", &n);
int i = n % 10;
if (i > 5)
printf("Last digit of %d is %d and is less than 5", n, i);
else if (i == 0)
printf("Last digit of %d is %d and is 0", n, i);
else if (i < 6 && i != 0)
if (i > 5)
printf("Last digit of %d is %d and is less than 6 and not 0", n, i);
return (0);
}
