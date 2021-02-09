#include "holberton.h"

/**
 * main - the main function calls the print_alphabet_x10 function.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
print_alphabet_x10();

return (0);
}

/**
 * print_alphabet_x10 - this function prints alphabets
 * in lowercase x10.
 * Return: void.
 */
void print_alphabet_x10(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
