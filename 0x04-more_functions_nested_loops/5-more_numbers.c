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
_putchar(num + '0');
}
_putchar('\n');
count++;
}
_putchar('\n');
return;
}
