#include "holberton.h"

/**
 * main - the main function calls the print_alphabet function.
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}

/**
 * print_alphabet - this function prints alphabets
 * in lowercase.
 * Return: void.
 */
void print_alphabet(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
