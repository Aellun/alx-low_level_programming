#include "main.h"
/**
 *_memcpy - function copies a memory area
 *@dest: the destination memory area
 *@src: the source memory area,
 *@n: number of bytes to be copied
 *
 *Return: char*, which is a pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];/*Copy each byte from source to destination*/
		n--;
	}
	return (dest);/*Return pointer to the destination memory area*/
}

