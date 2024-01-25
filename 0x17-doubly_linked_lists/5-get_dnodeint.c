#include "lists.h"


/**
 *get_dnodeint_at_index - locates a node in a double linked list
 *
 *@head: head of double linked list
 *@index: node to search for
 *Return: NULL if node is absent else address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    while (head != NULL)
    {
        if (i == index)
            return head;

        head = head->next;
        i++;
    }

    return (NULL);
}
