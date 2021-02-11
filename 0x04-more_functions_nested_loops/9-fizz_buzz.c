#include "holberton.h"
#include "_putchar.c"
#include <stdio.h>
/**
 * main - displays numbers 0 to 100 and replaces
 * Fizz for multiplies of 3, Buzz for multiplies of 5
 * and FizzBuzz for multiplies of both 3 & 5.
 * Return: 0.
 */
int main(void)
{
int i;
char message1[] = "FizzBuzz";
char message2[] = "Fizz";
char message3[] = "Buzz";

for (i = 1; i <= 100; i++)
{
if ((i % 3 != 0) && (i % 5 != 0))
{
printf("%d ", i);
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("%s ", message1);
}
else if (i % 3 == 0)
{
printf("%s ", message2);
}
else if (i % 5 == 0)
{
printf("%s ", message3);
}
}
_putchar('\n');
return (0);
}
