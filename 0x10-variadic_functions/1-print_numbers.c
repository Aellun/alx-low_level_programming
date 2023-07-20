#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers, followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* @...: A variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Declare a va_list variable to handle the variable number of arguments */
	va_list nums;
	unsigned int index;

	/* Initialize the va_list variable with the number of arguments */
	va_start(nums, n);

	/* Loop through each argument and print the number */
	for (index = 0; index < n; index++)
	{
		/* Retrieve the next argument using va_arg and print it as an integer */
		printf("%d", va_arg(nums, int));

		/* checks If it's not the last number and a separator is provided*/
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	/* Print a new line after printing all the numbers */
	printf("\n");

	/* Clean up and free the resources associated with the va_list */
	va_end(nums);
}

