#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: pointer to the head of the dlistint_t.
 * @index: index of the node to delete.
 *
 * Return: success - 1.
 *         else -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    if (*head == NULL)
        return -1;

    dlistint_t *current = *head;
    unsigned int i;

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    for (i = 0; i < index && current != NULL; i++)
        current = current->next;

    if (current == NULL)
        return -1;

    if (current->next != NULL)
        current->next->prev = current->prev;

    if (current->prev != NULL)
        current->prev->next = current->next;

    free(current);
    return 1;
}
