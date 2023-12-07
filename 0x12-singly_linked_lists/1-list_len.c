#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  number of elements in linked list
 * @h: ptr to the list_t list
 *
 * Return: no of elements h
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
