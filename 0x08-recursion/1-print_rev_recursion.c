#include "main.h"

/**
 * _print_rev_recursion - main function
 *@s: Function being printed
 *Return: Void
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
