#include "main.h"

/**
 * print_alphabet - main function for printing alphabets.
 * Description: prints the alphabet using a custom header file function.
 * Return: 0
 */
void print_alphabet_x10(void)
{
char alpha;
int count;
for (count = 0; count <= 10; count++)
{
for (alpha = 'a'; alpha <= 'z'; ++alpha)
{
_putchar(alpha);
}
_putchar('\n');
}
}
