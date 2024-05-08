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
	return (binarySearchRecursive(array, 0, size - 1, value));
}

/**
 * binarySearchRecursive - binary Search using Recursive approach
 *
 * @array: pointer to the first element of the array to search in
 * @left: lower bound
 * @right: upper bound
 * @value: the number of elements in array
 * Return: the first index where value is located if not return -1
 */
int binarySearchRecursive(int *array, int left, int right, int value)
{
	int i, mid, size;

	size = (right - left) + 1;
	mid = (right + left) / 2;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
		else
			printf("\n");
	}

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value && size > 1)
		return (binarySearchRecursive(array, 0, mid - 1, value));
	else if (array[mid] < value && size > 1)
		return (binarySearchRecursive(array, mid + 1, right, value));

	return (-1);
}
