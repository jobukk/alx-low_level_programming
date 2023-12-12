#include "lists.h"

/**
* sum_listint - calculates sum of all the data in a listint_t list
* @head: first node in the linked list
*
* Return: resulting sum
*/
int sum_listint(listint_t *head)
{
int add = 0;
listint_t *cur = head;

while (cur)
{
add += cur->n;
cur = cur->next;
}

return (add);
}
