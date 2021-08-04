#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the linked list
 *
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	int iter = 0;

	while (h)
	{
		h = h->next;
		iter++;
	}
	return (iter);
}
