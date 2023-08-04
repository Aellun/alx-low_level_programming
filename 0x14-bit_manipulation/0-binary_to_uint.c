#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 * Return: the converted number 0  if the input is invalid
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec_val = (dec_val << 1) + (b[i] - '0');
	}

	return (dec_val);
}
