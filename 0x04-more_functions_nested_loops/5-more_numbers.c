#include "main.h"

/**
 * more_numbers - main function
 * Description: prints 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
char num;
int count = 0;
while (count <= 9)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
_putchar('\n');
count++;
}
return;
}
