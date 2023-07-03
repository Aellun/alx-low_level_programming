#include "main.h"
/**
 * _memset - fill memeory with constant byte
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
/*pass an array s of length I to  first n bytes of s (where n <= I) to b*/
		s[i] = b;
		n--;
	}
	return (s);
}
