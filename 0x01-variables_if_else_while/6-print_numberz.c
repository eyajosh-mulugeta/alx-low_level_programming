#include <stdio.h>

/**
 * main - the main function prints all single digit base10 numbers
 * starting from 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0');
}

putchar('\n');
return (0);
}
