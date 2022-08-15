#include "lists.h"

/**
  * listint_len - returns the number of elements in a list
  * @h: pointer to first element
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
