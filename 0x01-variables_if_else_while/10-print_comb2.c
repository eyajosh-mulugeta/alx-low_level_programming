#include <stdio.h>

/**
 * main - the main function prints the numbers from 00 to 99.
 * Return: Always 0 (Success)
 */
int main(void)
{

int num1;
int num2;

for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = 0; num2 <= 99; num2++)
{
putchar(num1 + '0');
putchar(num2 + '0');
if (num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
