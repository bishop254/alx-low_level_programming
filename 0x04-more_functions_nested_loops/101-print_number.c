#include "main.h"

/**
 * print_number - main function
 * @n: integer to be printed
 * Description: prints an integer
 * Return: void
 */

void print_number(int n)
{
int temp = n;
int flag = 1;
int pow = 1;

if (temp < 0)
{
temp = temp * -1;
_putchar(45);
}

while (flag)
{
if (temp / (pow * 10) > 0)
{
pow *= 10;
}
else
{
flag = 0;    
}
}
while (temp >= 0)
{
if (pow == 1)
{
_putchar(temp % 10 + '0');
temp = -1;
}
else
{
_putchar((temp / pow % 10) + '0');
pow /= 10;
}
}
return;
}
