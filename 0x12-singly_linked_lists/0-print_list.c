#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_list - Prints out a l=singly linked list
  *
  * @h: A pointer to the head node
  *
  * Return: Retuns the number of nodes
  */
size_t print_list(const list_t *h)
{
char *str;
size_t count = 0;

if (h == NULL)
return (count);
str = h->str;
printf(
"[%u] %s\n",
(str == NULL ? 0 : h->len),
(str == NULL ? "(nil)" : str)
);
count++;
count += print_list(h->next);
return (count);
}
