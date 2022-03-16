/**
 * main - main function
 * Description: prints the sum of natural numbers below 1024
 * that are a multiple of 3 or 5
 * Return: sum
 */
int main(void)
{
int sum, num;

for (num = 0; num < 1024; num++)
{
if (num % 3 == 0)
{
sum += num;
}
else if (num % 5 == 0)
{
sum += num;
}
return (sum);
}
}
