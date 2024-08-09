#include "lists.h"

/**
 *list_len - num of elements in linked list is returned
 *@h: pointer at beginning of list
 *Return: num of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t elementnum = 0;

	while (h != NULL)
	{
		elementnum++;
		h = h->next;
	}

	return (elementnum);
}
