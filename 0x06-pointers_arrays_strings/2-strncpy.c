#include "main.h"

/**
 * *_strncpy - main function.
 * @dest: pointer to the destination address
 * @src: pointer to the string that is being copied
 * @n: number of bytes to be used from @src
 * Description: Appends a string from one pointer to another
 * using a predetermined number of bytes
 * (appends at the start of @dest)
 * Return: Pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0' && n > i; i++)
{
dest[i] = src[i];
}

for (i ; n > i; i++)
{
dest[i] = '\0';
}

return (dest);
}
