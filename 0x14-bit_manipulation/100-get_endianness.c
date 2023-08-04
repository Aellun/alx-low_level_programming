#include "main.h"

/**
 * get_endianness - checks of a machine
 * @i character pointer checking the value of of first byte
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
