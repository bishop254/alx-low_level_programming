#include <stdio.h>

/**
 * main - main function
 * Description: prints numbers between 1 to 100 where it
 * Multiples of 3 print Fizz and Prints Buzz if it is divisible by 5
 * Prints FizzBuzz if it is divisible by both 3 and 5
 * Return: 0
 */

int main(void)
{
int a;
char str1[] = "Fizz", str2[] = "Buzz", str3[] = "FizzBuzz";
for (a = 1; a <= 100; a++)
{
if ((a % 5 == 0) && (a % 3 == 0))
{
printf("%s", str3);
}
else if (a % 5 == 0)
{
printf("%s", str2);
}
else if (a % 3 == 0)
{
printf("%s", str1);
}
else
{
printf("%d", a);
}
if (a != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
