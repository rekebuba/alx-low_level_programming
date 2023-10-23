#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h: struct type
 * Return: size_t (the number of nodes)
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
