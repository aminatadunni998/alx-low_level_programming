#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - Sums all the data (n) of a listint_t linked list
  *
  * @head: A pointer to the head node
  *
  * Return: Returns the sum of all the data (SUCCESS),
  * or 0 (FAIL)
  */
int sum_listint(listint_t *head)
{
int sum;

sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
