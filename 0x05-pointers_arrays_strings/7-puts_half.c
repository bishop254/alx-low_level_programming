#include "main.h"

/**
 * puts_half: main function.
 * Description: Prints half of a string
 * @str: pointer to a string variable
 * Return: void
 */

void puts_half(char *str)
{
int i = 0, j, len_start;

while (str[i] != '\0')
{
i++;
}

if (i % 2 == 0)
{
len_start = i / 2;
for (j = len_start; j < i; j++)
{
_putchar(str[j]);
}
}
else 
{
len_start = (i - 1) / 2;
for (j = len_start + 1; j < i; j++)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
