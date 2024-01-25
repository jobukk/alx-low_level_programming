#include "lists.h"
/**
 *add_dnodeint_end - add new dat to the end of the list
 *@n: data
 *@head: ptr ptr to struct
 *
 *
 *Return - new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *last = *head;

    if (new_node == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return NULL;
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return new_node;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;

    return new_node;
}
