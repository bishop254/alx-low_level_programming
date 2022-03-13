#include <stdio.h>

/**
 * main - main function
 * Description: prints all possible combinations
 * for triple-digit numbers using putchar
 * Return: 0
 */
int main(void)
{
int num, num1, num2, num3;

for (num = 0; num < 1000; num++)
{
num1 = num / 100;
num2 = (num / 10) % 10;
num3 = num % 10;

if (num1 < num2 && num2 < num3)
{
putchar(num1 + '0');
putchar(num2 + '0');
putchar(num3 + '0');
if (num < 700)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
