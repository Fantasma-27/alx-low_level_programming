#include "main.h"

/**
* _strspn - length of prefix substring
* @s: input string to search
* @accept: input prefix to measure
* Return: The number of bytes in s which consists only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
bytes++;
break;
}
else
if (accept[index + 1] == '\0')
return (bytes);
}

s++;
}
return (bytes);
}
