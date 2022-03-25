#include "main.h"

/**
 * _strcmp - main function.
 * @s1: pointer to the destination address
 * @s2: pointer to the string that is being copied
 * Description: Compares ASCII of two numbers.
 * Return: Integer Pointer to @s1
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
