#include "main.h"

/**
 * print_numbers - main function
 * Description: prints 0 to 9
 * Return: void
 */
void print_numbers(void)
{
char num;
for (num = 0; num <= 9; num++)
{
_putchar(num + '0');
}
_putchar('\n');
return;
}
