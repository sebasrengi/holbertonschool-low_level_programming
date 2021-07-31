#include "lists.h"
/**
 * list_len - Show the number of elements of a list
 * @h: A linked list
 *
 * Return: The number of elements of a list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
