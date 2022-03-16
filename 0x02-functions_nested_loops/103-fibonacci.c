#include <stdio.h>

/**
 * main - main function
 * Description: prints the first 50 even Fibonacci numbers
 * whose value is less than 4000000
 * Return: 0
 */
int main(void)
{
int i;
long int f1 = 0, f2 = 1;
long int nextNum = f1 + f2;
long int sum = 0;

for (i = 0; i <= 50; ++i)
{
f1 = f2;
f2 = nextNum;
nextNum = f1 + f2;
if (nextNum < 4000000)
{
if (nextNum % 2 == 0)
{
sum += nextNum;
}
}
else
{
break;
}
}
printf("%lu", sum);
printf("\n");
return (0);
}
