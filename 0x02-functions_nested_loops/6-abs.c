#include "main.h"

/**
 * _abs - main function
 * @n: integer from which we will compute the absolute value
 * Description: prints absolute value of an integer
 * Return: absolute value
 */

int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n == 0)
{
return (0);
}
else
{
n = n * (-1);
return (n);
}
}
