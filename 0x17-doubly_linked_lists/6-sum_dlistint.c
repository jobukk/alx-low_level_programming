#include "lists.h"


/**
*sum_dlistint - sum data in node
*@head: head of double linkedlist
*
*Return - sum
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head != NULL)
{
while (head->prev != Null)
head = head->prev;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
}

return (sum);
}
