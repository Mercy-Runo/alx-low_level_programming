#include "lists.h"

/**
  * print_listint - prints all elements of a list
  * @h: pointer to the first node of the list
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
const listint_t *ptr = h;
size_t count = 0;

while (ptr != NULL)
{
printf("%d\n", ptr->n);
count++;
ptr = ptr->next;
}
return (count);
}
