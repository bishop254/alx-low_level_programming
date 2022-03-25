#include "main.h"

/**
 * reverse_array - main function.
 * @a: pointer to an array
 * @n: amount of numbers to swap
 * Description: Reverses a predetermined number of items
 * in an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int temp;

for (int i = 0; i < n/2; i++)
{
temp = a[i];
a[i] = a[n-i-1];
a[n-i-1] = temp;
}
return;
}
