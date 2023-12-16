#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: character
 * @av: character
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *array;
	int i, j;
	int len = 0, r = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	len += ac;
	array = (char *)(malloc(sizeof(char) * (len + 1)));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			array[r] = av[i][j];
			r++;
		}
		if (array[r] == '\0')
		{
			array[r++] = '\n';
		}
	}
	array[len] = '\0';
	return (array);
}
