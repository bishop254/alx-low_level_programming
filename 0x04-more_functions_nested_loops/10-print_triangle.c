#include "main.h"

/**
 * print_triangle - main function
 * @size: measure of the triangles' side
 * Description: prints a triangle on the terminal using "#"
 * Return: void
 */

void print_triangle(int size)
{
int count, b, h;
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
for (b; b > 0; b--)
{
_putchar(' ');
}
for (h; h > 0; h--)
{
_putchar(35);
} 
}
_putchar('\n');
return;  
}
}
