#include "main.h"

/**
 * print_rev: main function
 * Description: Prints a string in reverse
 * @s: pointer to a string variable
 * Return: void
 */
void print_rev(char *s)
{
int i;
int lenStr = _strlen(s);
for (i = lenStr; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
