#include <stdio.h>

/**
 * main - main function
 * Description: prints digits alphabets in reverse using putchar
 * Return: 0
 */
int main(void)
{
char alpha;
for (alpha = 'z'; alpha >= 'a'; --alpha)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
