#include "holberton.h"

/**
 * print_alphabet_x10 - this function prints alphabets
 * in lowercase x10.
 * Return: void.
 */
void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0, ch = 'a'; i <10, ch <= 'z'; ch++, i++)
_putchar(ch);
_putchar('\n');
}
