#include "lists.h"

/**
 * sum_dlistint - sum of all the data of a list
 * @head: head to the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
