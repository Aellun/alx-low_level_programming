#include <stdio.h>
#include <stdarg.h>

/**
* print_char - Prints a character.
* @c: The character to print.
*/
void print_char(char c)
{
	printf("%c", c);
}

/**
* print_int - Prints an integer.
* @i: The integer to print.
*/
void print_int(int i)
{
	printf("%d", i);
}

/**
* print_float - Prints a floating-point number.
* @f: The floating-point number to print.
*/
void print_float(double f)
{
	printf("%f", f);
}

/**
* print_string - Prints a string.
* @s: The string to print.
*/
void print_string(char *s)
{
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
* print_all - Prints anything.
* @format: List of types of arguments passed to the function.
* Description: If separator is NULL, it is not printed.
* If one of the strings is NULL, "(nil)" is printed instead.
*Unsupported format characters will trigger an error message.
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					print_char(va_arg(list, int));
					break;
				case 'i':
					print_int(va_arg(list, int));
					break;
				case 'f':
					print_float(va_arg(list, double));
					break;
				case 's':
					print_string(va_arg(list, char *));
					break;
				default:
					fprintf(stderr, "Unsupported format character: '%c'\n", format[i]);
					break;
			}

			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}

