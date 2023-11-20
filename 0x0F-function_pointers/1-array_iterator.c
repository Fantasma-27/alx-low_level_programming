#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterates through an array and apply
 * a callback function
 * @array: The array
 * @size: Size of array
 * @action: Callback function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
