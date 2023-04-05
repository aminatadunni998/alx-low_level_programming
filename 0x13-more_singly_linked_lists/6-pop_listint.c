#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - Deletes the head node of a listint_t linked list
  *
  * @head: A pointer to a pointer to the head node
  *
  * Return: Returns the head node's data, or 0 if the list is empty
  */
int pop_listint(listint_t **head)
{
listint_t *current_node;
int data = 0;

if (*head == NULL)
return (data);
data = (*head)->n;
current_node = *head;
*head = (*head)->next;
free(current_node);

return (data);
}
