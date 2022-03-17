#include "main.h"

/**
 * _isdigit - main function
 * @c: character to be checked
 * Description: checks if character is a number between 0 - 9 
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
