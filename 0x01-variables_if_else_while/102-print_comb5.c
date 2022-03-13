#include <stdio.h>

/**
 * main - main function
 * Description: prints all possible combinations
 * for two double-digit numbers using putchar
 * Return: 0
 */
int main(void)
{
int num, num1, a, b, c, d;

for (num = 0; num < 100; num++)
{
a = num / 10;
b = num % 10;

for (num1 = 0; num1 < 100; num1++)
{
c = num1 / 10;
d = num1 % 10;

if (a < c || (a == c && b < d))
{
putchar(a + '0');
putchar(b + '0');
putchar(32);
putchar(c + '0');
putchar(d + '0');

if (!(a == 9 && b == 8))
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
