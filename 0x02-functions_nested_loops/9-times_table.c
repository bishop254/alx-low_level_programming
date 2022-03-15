#include "main.h"

/**
 * times_table - main function
 * Description: prints the multiplication table from 0 to 9
 * Return: void
 */

void times_table(void)
{
    int factor;
    int count, result;

    for (factor = 0; factor < 10; factor++)
    {
        for (count = 0; count < 10; count++)
        {
            result = factor * count;

            if (result > 9)
            {
                _putchar((result / 10) + '0');
                _putchar((result % 10) + '0');
            }
            else if (count != 0)
            {
                _putchar(' ');
                _putchar(result + '0');
            }
            else
            {
                _putchar(result + '0');
            }

            if (count != 9)
            {
                _putchar(44);
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}
