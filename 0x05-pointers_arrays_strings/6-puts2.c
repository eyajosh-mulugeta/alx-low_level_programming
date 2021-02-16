#include "holberton.h"


/**
 * puts2 - A function that prints every other character of a string.
 * @str: a char type parameter which holds the address of the string value.
 * Return: void.
 */
void puts2(char *str)
{
int len = 0;
int i;

for (i = 0; str[i] != '\0'; i++)
len++;

for (i = 0; i < len; i += 2)
_putchar(str[i]);
_putchar('\n');
}
