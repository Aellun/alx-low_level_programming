#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	/* Variable declarations*/
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	/* Check the number of arguments*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the argument to an integer*/
	num = atoi(argv[1]);
	result = 0;

	/* Check if the number is negative*/
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate through the coins array and calculate the minimum number of coins*/
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	/* Print the result*/
	printf("%d\n", result);
	return (0);
}

