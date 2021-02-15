#include "holberton.h"
#include <string.h>
/**
 * print_rev - a function which reverses a string and print on console.
 * @c: a pointer variable which holds the string.
 * Return: void.
 */
void print_rev(char *c)
{
int i;
int len;

len = strlen(c);
for (i = len - 1; i > 0; i--)
_putchar(c[i]);
_putchar('\n');
}
