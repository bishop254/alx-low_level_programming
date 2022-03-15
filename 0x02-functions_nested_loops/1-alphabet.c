#include "main.h"

/**
 * main - main function
 * Description: prints the alphabet using a custom header file function.
 * Return: 0
 */
void print_alphabet(void)
{
for (char alpha = 'a'; alpha <= 'z'; ++alpha)
{
_putchar(alpha);
}
_putchar('\n');
}
