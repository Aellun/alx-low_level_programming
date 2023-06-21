#include "main.h"
#include <unistd.h>
/**
 * putchar functions is to write the character of c to stdout
 * return: o on success and 1 when error is encountered
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
