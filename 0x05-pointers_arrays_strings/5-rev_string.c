#include "main.h"

/**
 * rev_string: main function.
 * Description: Reverses a string
 * @s: pointer to a string variable
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
int lenStr, c;
char newStr;
char temp;

while (s[i] != '\0')
{
i++;
}
lenStr = i;


for (i = 0; i < lenStr / 2; i++)
{
temp = s[i];
s[i] = s[lenStr - i - 1];
s[lenStr - i - 1] = temp;
}
_putchar(s);
_putchar('\n');
}
