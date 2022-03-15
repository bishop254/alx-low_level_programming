#include "main.h"

/**
 * print_alphabet_x10 - main function for printing alphabets
 * Description: prints the alphabet ten times 
 * using a custom header file function.
 * Return: void
 */
void print_alphabet_x10(void)
{
char alpha;
int count;
for (count = 1; count <= 10; count++)
{
for (alpha = 'a'; alpha <= 'z'; ++alpha)
{
_putchar(alpha);
}
_putchar('\n');
}
}
