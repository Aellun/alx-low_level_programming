#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')/* cech if the cureent character is not a null*/
	{
		_putchar(*s);/*prints the current chararcter*/
		_puts_recursion(s + 1);/* calls the function with the next character*/
	}

	else
		_putchar('\n');
}

