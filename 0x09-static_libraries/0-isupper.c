#include "main.h"
/**
 * _isupper - identify uppercase letters
 * @c: character that is being checked
 * Return: Either  0 or 1
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
