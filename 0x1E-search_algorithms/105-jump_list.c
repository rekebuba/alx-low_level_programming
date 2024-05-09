#include "search_algos.h"

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);


/**
 * jump_list - A function that searches for a value
 * in a sorted list of integers using the Jump search algorithm
 *
 * @list: pointer to the first element of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: the first index where value is located if not return -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size), i;
	listint_t *low = list;
	listint_t *high = list;

	if (list == NULL)
		return (NULL);

	while (high->next != NULL)
	{
		i = 0;
		for (high = low; i != jump && high->next != NULL; i++)
			high = high->next;

		printf("Value checked at index [%ld] = [%d]\n", high->index, high->n);

		if (low->n <= value && high->n >= value)
			break;
		else if (high->next != NULL)
			low = high;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
														low->index, high->index);
	for (; low != NULL && low->index <= high->index; low = low->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
		if (low->n == value)
			return (low);
	}

	return (NULL);

}
