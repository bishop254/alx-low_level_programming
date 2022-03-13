#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 * Description: if conditions to check if the last digit of
 *              a number is +ve or -ve
 * Return: 0
 */
int main(void)
{
	int n;
int lastD;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
lastD = n % 10;
if (lastD > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
} else if (lastD == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastD);
} else if (lastD != 0 && lastD < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
}
return (0);
}
