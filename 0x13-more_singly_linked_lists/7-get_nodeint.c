#include <stdlib.h>
#include "lists.h"

/**
  * get_nodeint_at_index - Gets the nth node of a listint_t linked list
  *
  * @head: A pointer to the head node
  * @index: The index of the node to get, starting at 0
  *
  * Return: Returns the node at the index (Success),
  * or NULL (Fail)
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current_node;
unsigned int i;

for (i = 0; i <= index; i++)
{
if (head == NULL)
return (NULL);
current_node = head;
head = head->next;
}

return (current_node);
}
