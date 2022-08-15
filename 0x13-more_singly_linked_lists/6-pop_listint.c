#include "lists.h"

/**
 * pop_listint - removes first node of list
 * @head: pointer to first element
 * Return: head node's data or 0 if it is empty
 */

int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	/*set head addr to temp*/
	temp = *head;
	/*get addr of next node*/
	next = temp->next;
	/*get element of first node*/
	first_node = temp->n;

	/*free first node*/
	free(temp);

	/*set head to second node*/
	*head = next;

	/*return element of first node*/
	return (first_node);
}
