#include <stdio.h>
#include <stdlib.h>
/**
 *main- prints the addition of two numbers.
 *@argc: holds the total  number of arguments.
 *@argv: An array of pointers to the argument.
 *Return: int.
 */

int main(int argc, char  *argv[])
{
int num, num2, sum;
for (num = 1; num < argc; num++)
{
for (num2 = 0; argv[num][num2]; num2++)
{
if (argv[num][num2] < '0' || argv[num][num2] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[num]);
}
printf("%d\n", sum);
return (0);
}
