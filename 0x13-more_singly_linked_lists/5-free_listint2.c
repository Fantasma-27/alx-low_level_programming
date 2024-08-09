#include "lists.h"
/**
 *free_listint2 - freeing a linked list
 *@head: points to listlint_t that can be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head && *head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
