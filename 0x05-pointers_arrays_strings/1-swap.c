#include "main.h"

/**
 * swap_int - main function
 * Description: interchanges values stored at pointer variables a and b
 * @a: first pointer variable to be swapped
 * @b: second pointer variable to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
return;
}
