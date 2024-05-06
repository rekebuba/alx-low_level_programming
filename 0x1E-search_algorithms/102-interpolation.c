#include "search_algos.h"

/**
 * interpolation_search - A function that searches for a value
 * in a sorted array of integers using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the number of elements in array
 * Return: the first index where value is located if not return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;

	if (array == NULL)
		return (-1);

	return (interpolation_search_helper(array, low, high, size, value));
}


/**
 * interpolation_helper - A recursive call to implement
 * Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @low: lower bound
 * @high: upper bound
 * @size: the number of elements in array
 * @value: the number of elements in array
 * Return: the first index where value is located if not return -1
 */
int interpolation_helper(int *array, int low, int high, size_t size, int value)
{
	size_t pos = low + (((double)(high - low) /
						(array[high] - array[low])) * (value - array[low]));

	if (pos > size - 1)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value && size > 1)
		return (interpolation_helper(array, 0, pos - 1, size, value));
	else if (array[pos] < value && size > 1)
		return (interpolation_helper(array, pos + 1, size - pos - 1, size, value));
	return (-1);
}
