#include <stdio.h>
/**
*main - entry point
*Description: prints the alphabet in reverse with lowercase
*Return: 0 (Success)
*/
int main(void)
{
int n = 122;
while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
