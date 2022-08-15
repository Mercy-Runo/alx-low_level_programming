#include "lists.h"

/**
 * free_listint2 - frees list and assigns head to NULL
 * @head: pointer to first element
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	return;

	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	head = NULL;
}
