#include "main.h"

/**
 * _islower - main function
 * Description: checks if a character is lowercase
 * @c: letter of type char
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
