#include <stdio.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
* followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	long n = 612852475143;
	long max = -1;
	long i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}
	printf("%ld\n", max);
	return (0);
}
