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

if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}

if (n < 98)
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}

}
