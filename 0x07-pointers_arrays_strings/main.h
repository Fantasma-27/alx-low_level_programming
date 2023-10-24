#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  char board[8][8] = {
		      {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		      {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		      {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		      {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
  };
  print_chessboard(board);
  return (0);
}#ifndef MAIN_H
#define MAIN_H

/**
 * void prototypes()
 * int prototypes()
 */

int _putchar(char);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /MAIN_H/
