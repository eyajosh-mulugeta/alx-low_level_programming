#include "holberton.h"


/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: holds the string value to be reversed.
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
