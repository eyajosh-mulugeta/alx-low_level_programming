#include "holberton.h"

/**
 * _puts_recursion - prints a string to the console.
 * @s: holds the string to be printed.
 * Return: void.
 */

void _puts_recursion(char *s)
{
int i;
int len = 0;

while (s[len])
len++;

for (i = 0; i < len; i++)
_putchar(s[i]);
_putchar('\n');
}
