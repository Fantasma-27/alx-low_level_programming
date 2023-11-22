#include "lists.h"

/**
 *sum_listint - calculates sum of all listint_t
 *@head: first node
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		total_sum += current_node->n;
		current_node = current_node->next;
	}

	return (total_sum);
}
