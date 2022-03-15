#include "main.h"

/**
 * _islower - main function
 * Description: checks if a character is lowercase 
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
_putchar(c + '0');
_putchar('\n');
return (1);
}
else
{
return (0);
}
}
