#include "main.h"

/**
 * print_array: main function.
 * Description: Prints n elements from an array of integers
 * @a: pointer to an array with integers
 * @n: number of elements to be printed from the array
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar(a[i]);
while (i < n)
{
_putchar(',');
_putchar(' ');
}
}
return;
}
