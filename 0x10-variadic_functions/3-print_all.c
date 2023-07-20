#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 * Description: If separator is NULL, it is not printed.
 *If one of the strings is NULL, "(nil)" is printed instead.
 *Unsupported format characters will trigger an error message.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "";
	va_list list;

	/* Initialize the va_list variable with the number of arguments */
	va_start(list, format);

	/* If format is not NULL, process the format string and print the values */
	if (format)
	{
		while (format[i])
		{
			/* Check the type of each argument based on the format character */
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':	
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					{	
						char *str = va_arg(list, char *);
						printf("%s%s", sep, (str ? str : "(nil)"));
					}
					break;
				default:
					/* If the format character is not recognized*/
					fprintf(stderr, "Unsupported format character: '%c'\n", format[i]);
					break;
			}

			/* Set the separator to ", " to be used between elements */
			sep = ", ";
			i++;
		}
	}

	/* Print a new line after printing all the values */
	printf("\n");

	/* Clean up and free the resources associated with the va_list */
	va_end(list);
}
