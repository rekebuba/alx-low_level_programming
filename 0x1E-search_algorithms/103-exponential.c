#include "search_algos.h"

/**
 * exponential_search - A function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the first index where value is located if not return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t right, left;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	if (i == size)
		right = i - 1;
	else
		right = i;
	left = i / 2;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	return (binarySearchIterative(array, left, right, value));
}

/**
 * binarySearchIterative - binary Search using Iterative approach
 *
 * @array: pointer to the first element of the array to search in
 * @left: lower bound
 * @right: upper bound
 * @target: the number of elements in array
 * Return: the first index where target is located if not return -1
 */
int binarySearchIterative(int *array, size_t left, size_t right, int target)
{
	size_t i;
	int mid;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
			else
				printf("\n");
		}
		mid = (left + right) / 2;

		if (array[mid] == target)
			return (mid);

		if (array[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
