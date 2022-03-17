#include "main.h"

/**
 * _isupper - main function
 * @c: character to be checked
 * Description: checks uppercase letters
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
char alpha;
for (alpha = 'A'; alpha <= 'Z'; ++alpha)
{
if (alpha == c)
{
_putchar(c);
_putchar(": ");
_putchar(1 + '0');
return (1);
}
else
{
_putchar(c);
_putchar(": ");
_putchar(0 + '0');
return (0);
}
}
}
