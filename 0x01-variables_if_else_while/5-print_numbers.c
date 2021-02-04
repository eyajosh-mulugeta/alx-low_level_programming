#include <stdio.h>

/**
 * main - the main function prints all single digit base10 numbers
 * including 0 to the screen
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
printf("%d", num);
}

putchar('\n');
return (0);
}
