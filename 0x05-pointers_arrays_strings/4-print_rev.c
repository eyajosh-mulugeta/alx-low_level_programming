#include "holberton.h"

/**
 * print_rev - a function which reverses a string and print on console.
 * @c: a pointer variable which holds the string.
 * Return: void.
 */
void print_rev(char *c)
{
int len = 0;
int i;
for (i = 0; c[i] != '\0'; i++)
len++;


for (i = len - 1; i > 0; i--)
_putchar(c[i]);
_putchar('\n');
}
