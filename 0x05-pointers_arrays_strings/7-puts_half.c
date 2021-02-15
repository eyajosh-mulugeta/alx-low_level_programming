#include "holberton.h"
#include <string.h>

/**
 * puts_half - is a function that prints the second half of a string to
 * the console.
 * @str: a pointer variable that holds the address of the string value.
 * Return: void.
 */
void puts_half(char *str)
{
int i;
int len;
int init;

len = strlen(str);
init = len / 2;

if (len % 2 != 0)
init = (len - 1) / 2;

for (i = init; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
