#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - Frees a listint_t list
  *
  * @head: A pointer to a pointer to the head node
  */
void free_listint2(listint_t **head)
{
listint_t *current_node;

if (head == NULL)
return;

while (*head != NULL)
{
current_node = *head;
*head = (*head)->next;
free(current_node);
}

*head = NULL;
}
