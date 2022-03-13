#include <stdio.h>

/**
 * main - main function
 * Description: prints all possible combinations
 * for double-digit numbers using putchar
 * Return: 0
 */
int main(void)
{
int num, num1, num2;

for (num = 0; num < 100; num++)
{
num1 = num % 10;
num2 = num / 10;
if (num2 < num1)
{
putchar(num2 + '0');
putchar(num1 + '0');
if (num < 89)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
