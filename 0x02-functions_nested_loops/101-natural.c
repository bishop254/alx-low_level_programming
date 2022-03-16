#include <stdio.h>

/**
 * main - main function
 * Description: prints the sum of natural numbers below 1024
 * that are a multiple of 3 or 5
 * Return: sum
 */
int main(void)
{
int num;
int sum = 0;

for (num = 0; num < 1024; num++)
{
if (num % 3 == 0)
{
sum += num;
}
else if (num % 5 == 0)
{
sum += num;
}
else
{
continue;
}
}
printf(&sum);
return (sum);
}
