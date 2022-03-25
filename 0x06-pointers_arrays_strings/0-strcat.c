#include "main.h"

/**
 * *_strcat - main function.
 * @dest: pointer to the destination address
 * @src: pointer to the string that is being copied
 * Description: Appends a string from one pointer to another
 * Return: Pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
int i, c = 0;

while (dest[c] != '\0')
{
c++;
}

for (i = 0; src[i] != '\0'; i++)
{
dest[c] = src[i];
c++;
}
dest[c] = '\0';
return (dest);
}
