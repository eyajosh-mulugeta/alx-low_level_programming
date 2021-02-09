#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints integer numbers from n to 98.
 * @n: n is an integer number.
 * Return: void.
 */
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
printf("%d, ", i);
_putchar('\n');
}
