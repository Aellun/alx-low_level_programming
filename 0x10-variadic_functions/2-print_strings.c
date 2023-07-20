#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
* Description: If separator is NULL, it is not printed.
*If one of the strings is NULL, "(nil)" is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* Declare a va_list variable to handle the variable number of arguments */
	va_list strings;
	char *str;
	unsigned int index;

	/* Initialize the va_list variable with the number of arguments */
	va_start(strings, n);

	/* Loop through each argument and print the string */
	for (index = 0; index < n; index++)
	{
/*Retrieve the next argument using va_arg and treat it as a char pointer*/
		str = va_arg(strings, char *);

		/* Check if the current string is NULL, print "(nil)" if it is */
		if (str == NULL)
			printf("(nil)");
		else
			/* Otherwise, print the string */
			printf("%s", str);

/*If it's not the last string and a separator is provided*/
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	/* Print a new line after printing all the strings */
	printf("\n");

	/* Clean up and free the resources associated with the va_list */
	va_end(strings);
}

