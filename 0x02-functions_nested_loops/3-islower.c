#include "holberton.h"

/**
 * main - the main function calls the _islower function and
 * prints the returned result to the console.
 * Return: Always 0 (Success)
 */
int main(void)
{

_putchar(_islower('C') + '0');
return (0);
}

/**
 * _islower - this function checks whether a character
 * is lowercase or not and return an integer value to main().
 * @c: c is an integer value.
 * Return: void.
 */
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
