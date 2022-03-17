#include "main.h"

/**
 * print_line - main function
 * @n: number of underscores
 * Description: prints a line on the terminal
 * Return: void
 */

void print_line(int n)
{
int count;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (count = 1; count <= n; count++)
{
_putchar(95);
}
_putchar('\n');
}
}
