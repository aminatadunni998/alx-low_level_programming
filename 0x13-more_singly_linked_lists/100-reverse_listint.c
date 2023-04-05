#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - Reverses a listint_t linked list
  *
  * @head: A pointer to a pointer to the head node;
  *
  * Return: Returns the reversed linked list (Success), or NULL (Fail)
  */
listint_t *reverse_listint(listint_t **head)
{
listint_t *current_node, *prev_node;

if (head == NULL || *head == NULL)
return (NULL);

prev_node = NULL;
current_node = *head;
while (*head != NULL)
{
current_node = (*head)->next;
(*head)->next = prev_node;
prev_node = *head;
*head = current_node;
}

*head = prev_node;
return (*head);
}
