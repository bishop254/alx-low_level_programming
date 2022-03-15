#include "main.h"

/**
 * print_sign: main function
 * @n: integer that will be checked if it is +ve or -ve
 * Description: prints the +ve or -ve sign preceeding an integer
 * Return: 1 if sign is +
 * 0 if n is zero
 * -1 if sign is -
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
