#include <stdio.h>

/**
 * main - main function
 * Description: prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
int i;
long int f1 = 1, f2 = 2;
long int nextNum = f1 + f2;

printf("%lu, %lu, ", f1, f2);

for (i = 3; i <= 98; ++i)
{
printf("%lu", nextNum);
if (i < 50)
{
printf(", ");
}
f1 = f2;
f2 = nextNum;
nextNum = f1 + f2;
}
printf("\n");
return (0);
}
