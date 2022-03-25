#include "main.h"

/**
 * *_strncat - main function.
 * @dest: pointer to the destination address
 * @src: pointer to the string that is being copied
 * @n: number of bytes to be used from @src
 * Description: Appends a string from one pointer to another
 * using a predetermined number of bytes
 * Return: Pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, c = 0;

while (dest[c] != '\0')
{
c++;
}

for (i = 0; src[i] != '\0' && n > 0; i++, n--, c++)
{
dest[c] = src[i];
}
return (dest);
}
