#include "main.h"

/**
 * print_last_digit - main function
 * @n: integer from which we will obtain its last digit
 * Description: prints the last digit of an integer
 * Return: value of last digit
 */

int print_last_digit(int n)
{
int lastD;
if (n < 0)
{
n *= -1;
lastD = n % 10;
_putchar(lastD + '0');
return (lastD);
}
else
{
lastD = n % 10;
_putchar(lastD + '0');
return (lastD);
}
}
