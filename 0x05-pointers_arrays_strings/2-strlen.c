#include "main.h"

/**
 * _strlen: main function
 * Description: Returns the length of a string
 * @s: A pointer pointing to a variable that holds a string
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
