#include "lists.h"

/**
 *pop_listint - deletes node
 *@head: points to 1st element
 *Return: deleted element data or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
