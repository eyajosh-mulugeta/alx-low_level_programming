#include "holberton.h"

/**
 * times_table - prints the 9 times table to the console.
 * Return: void.
 */
void times_table(void)
{
int i;
int j;
int product;

for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 0; j <= 9; j++)
{
product =  i * j;

_putchar(',');
_putchar(' ');

if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
