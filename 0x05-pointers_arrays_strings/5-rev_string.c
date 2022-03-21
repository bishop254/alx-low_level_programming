#include "main.h"

/**
 * rev_string - main function.
 * Description: Reverses a string
 * @s: pointer to a string variable
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
int lenStr, c;
char newStr;

while (s[i] != '\0')
{
i++;
}
lenStr = i;

for (i--, c = 0; c < (lenStr / 2); i--, c++)
{
newStr = s[c];
s[c] = s[i];
s[i] = newStr;
}
}
