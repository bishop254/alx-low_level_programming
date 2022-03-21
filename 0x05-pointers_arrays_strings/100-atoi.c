#include "main.h"

/**
 * _atoi - main function.
 * @s: String that numbers are obtained from
 * Description: Converts a string into numbers
 * If no number is present, return 0
 * Be aware of + or - before a number
 * Return: Number in the string s
 */
int _atoi(char *s)
{
int i, num = 0, operator = -1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 48 && s[i] <= 57)
{
if (num < 0)
{
num = (num * 10) - (s[i] - '0');
}
else
{
num = (s[i] - '0') * -1;
}
if (s[i + 1] < 48 || s[i + 1] > 57)
{
break;
}
}
if (s[i] == '-')
{
operator *= -1;
}
}
if (operator < 0)
{
num *= -1;
}
return (num);
}
