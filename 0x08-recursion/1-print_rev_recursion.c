#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')/* check if the current character is not null*/
	{
		_print_rev_recursion(s + 1);/*call the rev_ with next character in string*/
		_putchar(*s);
	}
}
