#include "main.h"

/**
 * _isupper - main function
 * @c: character to be checked
 * Description: checks uppercase letters
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
char alpha;
for (alpha = 'A'; alpha <= 'Z'; ++alpha)
{
if (alpha == c)
{
return (1);
}
else
{
return (0);
}
}
}
