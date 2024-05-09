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
	if (array == NULL)
		return (-1);
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
int binarySearchRecursive(int *array, size_t left, size_t right, int value)
{
	size_t i, size;
	int mid;

	mid = (right + left) / 2;
	size = (right - left) + 1;

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
		return (binarySearchRecursive(array, left, mid - 1, value));
	else if (array[mid] < value && size > 1)
		return (binarySearchRecursive(array, mid + 1, right, value));

	return (-1);
}
