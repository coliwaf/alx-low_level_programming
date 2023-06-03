#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string param
 */

void rev_string(char *s)
{
	int idx, len, temp;

	idx = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	len--;

	while (len > idx)
	{
		temp = s[len];
		s[len--] = s[idx];
		s[idx++] = temp;
	}
}	
