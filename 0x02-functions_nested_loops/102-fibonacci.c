#include <stdio.h>

/**
 * main - main function
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
int i, count;
int f1 = 1, f2 = 2;
int nextNum = f1 + f2;

printf("%d, %d, ", f1, f2);

for (i = 3; i <= 50; ++i)
{
printf("%d, ",nextNum);
f1 = f2;
f2 = nextNum;
nextNum = f1 + f2;
}
return (0);
}
