#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a listint_t list
  *
  * @head: A pointer to the head node of the list
  * @n: The data/integer to add along with the new node
  *
  * Return: Returns a pointer to the new element (SUCCESS)
  * or NULL (FAIL)
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
