#include "main.h"
/**
* _strlen_recursion - to get the str len
* @s: string
*Return: length of the str
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
* compare_str - compare each char of str
* @s: string
* @left: smallest itiration
* @right: largest itiration
*Return: palindrome
*/

int compare_str(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);

		return (0 + compare_str(s, left + 1, right - 1));
	}

	return (0);
}

/**
* is_palindrome - checks if str is palindrome
* @s: str being tested
*Return: 1 id true pal is present, 0 if not
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (compare_str(s, 0, _strlen_recursion(s - 1)));
}
