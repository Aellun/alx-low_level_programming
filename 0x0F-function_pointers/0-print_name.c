#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Function that print name using pointer function
 * @name: string to print
 * @f: pointer to function
 * Return: empty
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
