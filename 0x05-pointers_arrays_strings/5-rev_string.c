#include <string.h>
#include "holberton.h"
#include "_putchar.c"

/**
 * rev_string - a function which reverses a string and print on console.
 * @s: a pointer variable which holds the string.
 * Return: void.
 */
void rev_string(char *s)
{
int i;
int j;
int len;
char letter;
len = (int) strlen(s);

for (i = 0, j = len - 1; i < len; i--, j++)
{
letter = s[j];
s[j] = s[i];
s[i] = letter;
}
_putchar('\n');
}
