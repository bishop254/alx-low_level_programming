#include "main.h"

/**
 * print_times_table - main function
 * @n: Is the last multiple we should calculate
 * Description: prints the multiplication table from 0 to n
 * Should not print if n > 15 or n < 0
 * Return: void
 */

void print_times_table(int n)
{
int factor;
int count, result;
if (n > 0 || n < 16)
{
for (factor = 0; factor <= n; factor++)
{
for (count = 0; count <= n; count++)
{
result = factor * count;

if (result > 99)
{
_putchar((result / 100) + '0');
_putchar((result / 10 % 10) + '0');
_putchar((result % 10) + '0');
}
else if (result > 9)
{
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else if (count != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar(result + '0');
}

if (count != n)
{
_putchar(44);
_putchar(' ');
}
}
_putchar('\n');
}
}
}
