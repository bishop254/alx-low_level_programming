#include <stdio.h>

/**
 * main - main function
 * Description: prints lowercase and uppercase alphabets using puts
 * Return: 0
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; ++alpha)
{
putchar(alpha);
}
for (alpha = 'A'; alpha <= 'Z'; ++alpha)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
