#include "main.h"

/**
 * binary-to_uint - func converts a binary to an unsigned int
 * @b: pointer to string having the binary param
 * Return: unsigned intin decimal, otherwise return 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decm;
	int i;

	if (b == NULL)
		return (0);

	decm = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decm <<= 1;
		if (b[i] == '1')
			decm += 1;
	}
	return (decm);
}
