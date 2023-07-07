#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0') /* Iterate until the end of the string*/
		len++;

	while (i < len && f == 0) /*Iterate through the string*/
	{
		if (s[i] == '-') /* Check if the character is a minus sign*/
			++d;

		if (s[i] >= '0' && s[i] <= '9') /*Check if the character is a digit*/
		{
			digit = s[i] - '0'; /*Convert the character to its corresponding digit value*/
			if (d % 2)
				digit = -digit; /*Handle negative numbers*/
			n = n * 10 + digit; /*Calculate the integer value*/
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9') /*Check if the next character is not a digit*/
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n); /* Return the converted integer value*/
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3) /*Check if the number of arguments is not exactly 3*/
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]); /*Convert the first argument to an integer*/
	num2 = _atoi(argv[2]); /*Convert the second argument to an integer*/
	result = num1 * num2; /* Multiply the two numbers*/

	printf("%d\n", result); /*Print the result*/

	return (0);
}

