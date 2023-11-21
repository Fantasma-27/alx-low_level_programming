#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dupli_str;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	dupli_str = malloc(sizeof(char) * (i + 1));

	if (dupli_str == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dupli_str[r] = str[r];

	dupli_str[r] = '\0';

	return (dupli_str);
}
