#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_listint - Prints all the elements of a listint_t
  *
  * @h: A pointer to the head node of the listint_t list
  *
  * Return: Returns the number of nodes in the listint_t list
  */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

if (h == NULL)
return (count);
count++;
printf("%d\n", h->n);
count += print_listint(h->next);

return (count);
}
