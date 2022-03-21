#include "main.h"

/**
 * _strlen: Returns the length of a string
 * @s: A poointer pointing to a variable that stores a string
 * Return: length of the string
 */
int _strlen(char *s)
{
int c = 0;

while (s[c] != '\0')
{
c++;
}
return (c);
}
