#include "main.h"

/**
 * print_rev: main function
 * Description: Prints a string in reverse
 * @s: pointer to a string variable
 * Return: void
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
for (i -= i; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
