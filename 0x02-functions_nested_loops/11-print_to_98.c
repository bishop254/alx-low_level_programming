#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - main function
 * Description: prints natural numbers from a specific integer to 98
 * @n: starting point
 * Return: void
 */

void print_to_98(int n)
{
int count;
if (n < 99)
{
for (count = n; count <= 98; count++)
{
printf("%d", count);
if (count < 98)
{
printf(", ");
}
}
}

if (n > 98)
{
for (count = n; count >= 98; count--)
{
printf("%d", count);
if (count > 98)
{
printf(", ");
}
}
}
printf("\n");
}
