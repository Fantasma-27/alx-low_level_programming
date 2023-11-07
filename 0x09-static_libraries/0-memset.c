#include "main.h"
/**
*_memset - fillinf a scpecific value in a memoty block
*@s: where the address starts
*@b: yhe value that we want
*@n: the number of bytes that are changing
*Return: bring back the change in new byte value
*/
char *_memset(char *s, char b, unsigned int n)
{
int c = 0;
for (; n > 0; c++)
{
s[c] = b;
n--;
}
return (s);
}
