#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: pointer to the first element in the linked list
*
* Return: data inside the elements that was deleted,
* or 0 if list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp_node;
int dt;

if (!head || !*head)
return (0);

dt = (*head)->n;
temp_node = (*head)->next;
free(*head);
*head = temp_node;

return (dt);
}
