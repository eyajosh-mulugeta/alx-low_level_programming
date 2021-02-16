#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/** 
 * main - a function that generates random passwords.
 * Return: Always 0 (Success)
 */

int main(void)
{

int total;
int count;
int myrand;

srand(time(NULL));
for (count = 0, total = 2772; total > 122; count++)
{
myrand = (rand() % 125) + 1;
printf("%c", myrand);
total -= myrand;
}
printf("%c", total);

return (0);
}
