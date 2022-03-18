#include <stdio.h>
#include <math.h>

/**
 * main - main function
 * Description: prints prime factors of a number
 * Return: 0
 */
int main(void)
{
long n = 61285475143;
int maxNum = 0;

while (n % 2 == 0)
{
n = n / 2;
if (2 > maxNum)
{
maxNum = 2;
}
}

for (int i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
n = n / i;
if (i > maxNum)
{
maxNum = i;
}
}
}

if (n > 2)
{
if (n > maxNum)
{
maxNum = n;
}
}
printf("%d\n", maxNum);
return (0);
}
