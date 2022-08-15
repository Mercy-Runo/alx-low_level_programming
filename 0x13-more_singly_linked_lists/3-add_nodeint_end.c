#include "lists.h"

/**
  * add_nodeint_end - adds node to the end of a list
  * @head: pointer to the first node
  * @n: integer to be added
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
	return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	else
	{
		*head = temp;
	}

	return (temp);
}
