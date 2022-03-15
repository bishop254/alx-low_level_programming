#include "main.h"

/**
 * _isalpha - main function
 * Description: checks if a character is an alphabet
 * @c: letter of type char
 * Return: 1 if c is an alphabet, otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
