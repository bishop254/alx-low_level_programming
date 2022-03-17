#include "main.h"

/**
 * print_square - main function
 * @size: measure of the squares' side
 * Description: prints a square on the terminal using "#"
 * Return: void
 */

void print_square(int size)
{
int s1, s2;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (s2 = 0; s2 < size; s2++)
{
for (s1 = 0; s1 < size; s1++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
