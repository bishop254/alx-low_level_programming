#include <stdio.h>

/**
 * main - main function
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
int i;
long int f1 = 1, f2 = 2;
long int nextNum = f1 + f2;

printf("%lu, %lu, ", f1, f2);

for (i = 3; i <= 50; ++i)
{
printf("%lu, ",nextNum);
f1 = f2;
f2 = nextNum;
nextNum = f1 + f2;
}
return (0);
}
