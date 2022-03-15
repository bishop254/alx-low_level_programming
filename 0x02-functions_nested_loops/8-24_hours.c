#include "main.h"

/**
 * jack_bauer - main function
 * Description: prints every minute of the day
 * Return: 0
 */

void jack_bauer(void)
{
int hoursA = 0;
int hoursB = 0;
int minA = 0;
int minB = 0;
int count;

for (count = 0; count < 1440; count++)
{
_putchar(hoursA + '0');
_putchar(hoursB + '0');
_putchar(58);
_putchar(minA + '0');
_putchar(minB + '0');
_putchar('\n');
minB++;

if (minB > 9)
{
minB = 0;
minA++;
}
if (minA > 5)
{
minA = 0;
hoursB++;
}
if (hoursB > 9)
{
hoursB = 0;
hoursA++;
}
}
}
