#include "holberton.h"

/**
 * times_table - prints the 9 times table to the console.
 * Return: void.
 */
int times_table(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
printf("%d, ", i * j);
}
printf("\n");
}
}
