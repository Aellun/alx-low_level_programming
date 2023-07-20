#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its parameters.
* @n: The number of parameters passed to the function.
* @...: A variable number of parameters to calculate the sum of.
* Return: If n == 0 - 0.
* Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	/* Declare a va_list variable to handle the variable number of arguments */
	va_list args;

	/* Declare a loop counter and a variable to hold the sum */
	unsigned int i;
	int sum = 0;

	/* If the number of arguments is zero, return 0 */
	if (n == 0)
		return (0);

	/* Initialize the va_list variable with the number of arguments */
	va_start(args, n);

	/* Loop through each argument and calculate the sum */
	for (i = 0; i < n; i++)
	{
		/* Retrieve the next argument using va_arg and store it in current_arg */
		int current_arg = va_arg(args, int);

		/* Add the current argument to the sum */
		sum += current_arg;
	}

	/* Clean up and free the resources associated with the va_list */
	va_end(args);

	/* Return the calculated sum */
	return (sum);
}

