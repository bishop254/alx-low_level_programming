#include <stdio.h>

/**
 * main - main function
 * Description: prints lowercase alphabets except q & e using puts
 * Return: 0
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; ++alpha)
{
if (alpha != 'q' && alpha != 'e')
{
putchar(alpha);
}
}
putchar('\n');
return (0);
}
