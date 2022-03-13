#include <stdio.h>

/**
 * main - main function
 * Description: prints all possible combinations 
 * for single-digit numbers using putchar
 * Return: 0
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0');
if (num < 9)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
