#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line argument.
 * @argv: array of command line argument.
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
printf("Error\n");
return (0);
}
