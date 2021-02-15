#include "holberton.h"
#include <stdio.h>

/**
 * print_array - a function that displays an array of
 * integers on the console.
 * @a: a pointer variable which holds the array address.
 * @n: number of elements of the array.
 * Return: void.
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if(i != (n - 1))
printf(", ");
}
printf("\n");
}
