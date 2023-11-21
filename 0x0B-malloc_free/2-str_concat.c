#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int first_len = 0, second_len = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[first_len] != '\0')
		first_len++;

	while (s2[second_len] != '\0')
		second_len++;

	concat = malloc(sizeof(char) * (first_len + second_len + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < first_len; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < second_len; i++, j++)
	{
		concat[i] = s2[j];
	}

	concat[i] = '\0';

	return (concat);
}
