#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: list to print
 *
 * Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
int i;
if (h == NULL)
return (0);
while (h)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
