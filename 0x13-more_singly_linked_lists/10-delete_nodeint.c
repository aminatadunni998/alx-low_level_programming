#include <stdlib.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - Deletes a node at a specified index
  * from a listint_t linked list
  *
  * @head: A pointer to a pointer to the head node of the list
  * @index: The index of the node to delete
  *
  * Return: Returns 1 (Success) or -1 (Fail)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node, *temp_node;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current_node = *head;

if (index == 0)
{
*head = current_node->next;
free(current_node);
return (1);
}
for (i = 0; i < (index - 1) && current_node != NULL; i++)
current_node = current_node->next;
if (current_node == NULL || current_node->next == NULL)
return (-1);

temp_node = current_node->next;
current_node->next = temp_node->next;
free(temp_node);

return (1);
}
