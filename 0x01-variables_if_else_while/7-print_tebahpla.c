#include <stdio.h>

/**
 * main - the main function prints all alphabets in lowecase and
 * in reverse order.
 * Return: Always 0 (Success)
 */
int main(void)
{
char startChar;
char endChar = 'a';
for (startChar = 'z'; startChar >= endChar; startChar--)
putchar(startChar);
putchar('\n');
return (0);
}
