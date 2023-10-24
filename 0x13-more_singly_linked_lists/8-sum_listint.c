#include "lists.h"

/**
 * sum_listint - sum of all the data (n)
 * @head: head of listint_t
 * Return: sum 
 */
int sum_listint(listint_t *head)
{
int sum = 0;
    listint_t *ptr = head;
if (ptr == NULL)
{
return (0);
}
while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
