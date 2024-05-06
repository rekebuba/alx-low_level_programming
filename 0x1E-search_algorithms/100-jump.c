#include "search_algos.h"
#include <math.h>

/**
 * binary_search - A function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the number of elements in array
 * Return: the first index where value is located if not return -1
 */
int jump_search(int *array, size_t size, int value)
{
    size_t i;
    size_t jump = sqrt(size);
    size_t left = 0, right = jump;

    if (array == NULL)
    {
        return (-1);
    }

    while (right < size)
    {
        if (array[left] < value)
        {
            printf("Value checked array[%ld] = [%d]\n", left, array[left]);
        }
        if (array[right] > value)
        {
            printf("Value checked array[%ld] = [%d]\n", right, array[right]);
        }
        if (array[left] <= value && array[right] >= value)
        {
            printf("Value found between indexes [%ld] and [%ld]\n", left, right);
            break;
        }
        left = right;
        right += jump;
    }

    for (i = left; i < size || i < right; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
	}
    return (-1);
}
