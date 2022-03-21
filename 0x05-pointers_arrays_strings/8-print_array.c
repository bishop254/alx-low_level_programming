#include "main.h"
#include <stdio.h>

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
printf("%d", a[i]);
while (i < n)
{
printf(", ");
}
}
printf('\n');
return;
}
