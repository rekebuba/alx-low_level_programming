#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: unsigned int.
 * @s2: unsigned int.
 * @n: unsigned int.
 * Return: 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i = 0, r = 0, j = 0, amount;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	amount = (n >= len2) ? len2 : n;
	array = malloc(sizeof(char) * (len1 + amount + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		array[r] = s1[i];
		r++;
	}
	for (j = 0; j < amount; j++)
	{
		array[r] = s2[j];
		r++;
	}
	array[r] = '\0';
	return (array);
}
