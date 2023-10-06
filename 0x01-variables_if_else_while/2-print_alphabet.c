#include <stdio.h>

/**
*main - Entry point
*Description: Prints the alphabets in lowercase
*Return: Always 0 (Success)
*/
int main(void)
{
char letter = 97;
while (letter <= 122)
{
putchar(letter);
letter++;
}
letter = 65;
while (letter <= 90)
{
putchar(letter);
letter++;
}
putchar(10);
return (0);
}
