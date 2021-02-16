#include "holberton.h"
#include "_putchar.c"

/**
 * rev_string - A function which reverses a string and print on console.
 * @s: a pointer variable which holds the string.
 * Return: void.
 */
void rev_string(char *s)
{

int j;
char letter;
int len = 0;
int i;

for (i = 0; s[i] != '\0'; i++)
len++;

 for (i = 0, j = len - 1; i < len; i++, j--)
{
letter = s[j];
s[j] = s[i];
s[i] = letter;
}
_putchar('\n');
}
