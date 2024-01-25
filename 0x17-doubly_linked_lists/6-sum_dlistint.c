#include "lists.h"


/**
 *sum_dlistint - sum data in node
 *@head: head of double linkedlist
 *
 *
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}
