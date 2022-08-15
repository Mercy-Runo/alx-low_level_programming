#include "lists.h"

/**
  * add_nodeint - adds a node at the beginning of a list
  * @head: first element pointer
  * @n: integer to be added
  * Return: address of new element or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (&**head);
}
