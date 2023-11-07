#include "main.h"
/**
*  _strcat - function that concatenates the two strings
*  @dest: one value entered
*  @src: second value entered
*
*  Return: void
*/

char *_strcat(char *dest, char *src)
{
  int d;
  int c;

  
 d = 0;
while (dest[d] != '\0')
{
d++;
}
b = 0;
while (src[c] != '\0')
{
dest[d] = src[c];
d++;
c++;
}
dest[d] = '\0';
return (dest);
}

