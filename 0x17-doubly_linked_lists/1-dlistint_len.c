#include "lists.h"

/**
 *dlistint_len - lenght of list
 *@h: ptr to the dlistint_t list
 *
 *Return: length
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        h = h->next;
        node_count++;
    }

    return node_count;
}
