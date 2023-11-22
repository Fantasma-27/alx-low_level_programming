#include "lists.h"

/**
 **insert_nodeint_at_index - inserts new node
 *@head: first node pointer
 *@index: new node is added here
 *@n: data to add to new node
 *Return: pointer to new node or null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; current_node && i < index; i++)
	{
		if (i == index - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		else
		{
			current_node = current_node->next;
		}
	}

	return (NULL);
}
