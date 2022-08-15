#include "lists.h"

/**
 * pop_listint - removes first node of list
 * @head: pointer to first element
 * Return: head node's data or 0 if it is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n;

	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		/*ptr = *head;*/
		*head = ptr->next;
		n = ptr->n;
		free(ptr);
		return (n);
	}
}
