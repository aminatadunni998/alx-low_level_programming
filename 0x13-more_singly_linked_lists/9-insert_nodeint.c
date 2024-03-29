#include <stdlib.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - Inserts a new node at a given position
  *
  * @head: A pointer to a pointer to the head node
  * @idx: Index of the list where the new node should be added, starting from 0
  * @n: The data to add along with the new node
  *
  * Return: Returns the address of the new node (SUCCESS)
  * or NULL (FAIL)
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current_node;
unsigned int i;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

current_node = *head;
for (i = 0; i < idx - 1; i++)
{
if (current_node == NULL)
{
free(new_node);
return (NULL);
}
current_node = current_node->next;
}

if (current_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = current_node->next;
current_node->next = new_node;

return (new_node);
}
