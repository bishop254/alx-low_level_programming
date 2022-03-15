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
char mess[] = "_putchar";
int position;

for(position = 0; position < sizeof(mess); position++)
{
_putchar(mess[position]);
}
_putchar("\n");
return (0);
}
