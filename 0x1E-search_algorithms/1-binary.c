#include "search_algos.h"

/**
 * binary_search - A function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the number of elements in array
 * Return: the first index where value is located if not return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int right, middle;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
		else
			printf("\n");
	}
	middle = (size / 2);

	if (size % 2 == 0)
	{
		middle = middle - 1;
		right = middle + 1;
	}
	else
	{
		right = middle;
	}

	if (array[middle] == value)
		return (middle);
	else if (array[middle] > value && size > 1)
		return (binary_search(array, middle, value));
	else if (array[middle] < value && size > 1)
		return (binary_search(array + middle + 1, right, value));

	return (-1);
}
