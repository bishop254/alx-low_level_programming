#include "main.h"

/**
 * cap_string - main function.
 * @c: any character or string
 * Description: Capitalize screen based on certain parameters
 * Return: Capitalized characters in a string.
 */
char *cap_string(char *c)
{
int i = 0, j;

int punc[] = {32, '\t', 125, 123, 41, 40, 34, 33, 63, 46, 59, 44, 11, '\n'};
if (c[0] > 96 && c[0] < 123)
{
c[0] -= 32;
}

while (c[i] != '\0')
{
if (c[i] > 96 && c[i] < 123)
{
j = 0;
while (j < 14)
{
if (c[i - 1] == punc[j])
{
c[i] -= 32;
break;
}
j++;
}
i++;
}
}
return (c);
}
