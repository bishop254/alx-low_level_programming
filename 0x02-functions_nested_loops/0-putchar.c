#include "main.h"

/**
 * main - main function 
 * Description: prints _putchar using a custom header
 * The main.h file has a prototype function called _putchar
 * that is linked to a file called _putchar.c
 * Return: 0 
 */
int main()
{
char mess[] = '_putchar';
int position = 0;

while(mess[position] != '\0')
{
_putchar(mess[position]);
position++;
}
_putchar('\n');
return (0);
}
