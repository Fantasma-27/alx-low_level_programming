#include "main.h"

/**
**_memset - fill memory with a constant byte
*@s: memory area to be filled
*@b: character to copy
*@n: number of times to copy b (bytes to be filled)
*
*Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
