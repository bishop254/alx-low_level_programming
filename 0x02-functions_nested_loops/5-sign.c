#include "main.h"

/**
 * print_sign: main function
 * Description: prints the +ve or -ve sign preceeding an integer
 * @n: integer that will be checked if it is +ve or -ve
 * Return: 1 if sign is +
 * Return: 0 if n is zero
 * Return: -1 if sign is -
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
