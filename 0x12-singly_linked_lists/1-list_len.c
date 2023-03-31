#include <stdlib.h>
#include "lists.h"

/**
  * list_len - Returns the length of a singly linked list
  *
  * @h: The pointer to the head node
  *
  * Return: Returns the length of the linked list
  */
size_t list_len(const list_t *h)
{
size_t count;

count = 0;
if (h == NULL)
return (count);
count++;
count += list_len(h->next);

return (count);
}
