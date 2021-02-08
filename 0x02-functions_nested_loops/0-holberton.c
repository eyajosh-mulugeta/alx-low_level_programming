#include "holberton.h"


/**
 * main - the main function prints a message to the console.
 * Return: Always 0 (Success)
 */

int main(void)
{
char message[] = "Holberton";
int i;
int arrayLength = sizeof(message) / sizeof(message[0]);

for (i = 0; i < arrayLength; i++)
_putchar(message[i]);
_putchar('\n');

return (0);
}
