#include "main.h"

/**
 * print_diagonal - main function
 * @n: number of times "\" is printed
 * Description: prints a diagonal on the terminal
 * Return: void
 */

void print_diagonal(int n)
{
int count = 0;
int tab;

if (n < 1)
_putchar('\n');

while (n > 0)
{
tab = count;
while (tab > 0)
{
_putchar(' ');
tab--;
}
count++;
n--;
_putchar('\\');
_putchar('\n');
}
}
