#include "lists.h"

/**
 *get_nodeint_at_index - returns node at index
 *@head: the beginning
 *@index: node to return (index)
 *Return: pointer to seeked node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *current_node = head;

	while (current_node && position < index)
	{
		current_node = current_node->next;
		position++;
	}

	return (current_node ? current_node : NULL);
}
