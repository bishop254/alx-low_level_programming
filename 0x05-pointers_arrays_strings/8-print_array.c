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
int i = 0, j = n;
for (j--; j >= 0; j--, i++)
{
printf("%d", a[i]);
while (j > 0)
{
printf(", ");
}
}
printf("\n");
return;
}
