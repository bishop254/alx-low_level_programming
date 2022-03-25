#include "main.h"

/**
 * reverse_array - main function.
 * @c: any character or string
 * Description: Converts lowercase to uppercase
 * Return: Converted lowercase characters.
 */
char *string_toupper(char *c){
int temp = 0;

while (c[temp] != '\0')
{
if (c[temp] >= 'a' && c[temp] <= 'z')
{
c[temp] -= 32;
}
temp++;
}
return (c);
}
