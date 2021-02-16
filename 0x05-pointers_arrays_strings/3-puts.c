#include "holberton.h"

/**
 * _puts - prints a string to the console.
 * @str: a pointer variable which holds the adress of the variable that
 * holds the string value.
 * Return: void.
 */
void _puts(char *str)
{
int len = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
len++;

for (i = 0; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
