#include "main.h"

/**
 * puts2: main function.
 * Description: Prints every other character of a string(SKIPS ONE CHAR)
 * beginning with the first character
 * @s: pointer to a string variable
 * Return: void
 */
void puts2(char *str)
{
int i = 0, c;

while (str[i] != '\0')
{
i++;
}

for (c = 0; c < i; c = c + 2)
{
_putchar(str[c]);
}
_putchar('\n');
}
