#include "main.h"

/**
 * *_strcpy: main function.
 * Description: Copies a string from one pointer to another
 * @dest: pointer to the destination address
 * @src: pointer to the string that is being copied
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != 0; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}