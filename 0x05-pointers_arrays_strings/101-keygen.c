#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/** 
 * main - a function that generates random passwords.
 * Return: Always 0 (Success)
 */

int main(void)
{

int i;
char pass[12];

srand((unsigned int)time(NULL));

for (i = 0; i < 4; i++)
{

pass[3 * i] = '0' + (rand() % 10);
char capLetter = 'A' + (rand() % 26);

pass[(3 * i) + 1] = capLetter;
char letter = 'a' + (rand() % 26);

pass[(3 * i) + 2] = letter;
}
pass[3 * i] = '\0';
printf("Random generated password: %s\n\n", pass);

printf("\n\n");

return (0);
}
