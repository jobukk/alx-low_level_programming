#include "lists.h"


/**
 * print_dlistint - print elements in dlinkedlist
 * @h: head
 *
 * Return : node_count
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        node_count++;
    }

    return node_count;
}
