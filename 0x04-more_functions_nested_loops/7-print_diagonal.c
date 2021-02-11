#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the console.
 * @n: the number of times '\' will be printed.
 * Return: void.
 */
void print_diagonal(int n)
{
int i;
int j;
int count;

if (n > 0)
{
for (i = 1; i <= n; i++)
{
count = i - 1;
for (j = 0; j < i; j++)
{
  if (count >= 1)
{
_putchar(' ');
 count--;
}
  else
    {
      _putchar('\\');
}
}
 if (i != n)
 _putchar('\n');
}
}
 _putchar('\n');

}
