#include "main.h"

/**
 * puts_half: main function.
 * Description: Prints half of a string
 * @str: pointer to a string variable
 * Return: void
 */

void puts_half(char *str)
{
int i = 0, j;

while (str[i] != '\0')
{
i++;
}

if (i % 2 == 0)
{
for (j = 0; j < i / 2; j++)
{
_putchar(str[j]);
}
}
else 
{
i -= 1;
for (j = 0; j < i / 2; j++)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
