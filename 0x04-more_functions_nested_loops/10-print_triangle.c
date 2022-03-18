#include "main.h"

/**
 * print_triangle - main function
 * @size: measure of the triangles' side
 * Description: prints a triangle on the terminal using "#"
 * Return: void
 */

void print_triangle(int size)
{
int count, h, b;
b = size - 1;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (count = 0; count < size; count++)
{
b = size - count - 1;
h = count + 1;
while (b > 0)
{
_putchar(' ');
b--;
}
while (h > 0)
{
_putchar(35);
h--;
}
_putchar('\n');
}
return;
}
}
