#include "main.h"

/**
 * _puts - main function
 * Description: Prints a string to standard output
 * @str: pointer to a str variable
 * Return: void
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
