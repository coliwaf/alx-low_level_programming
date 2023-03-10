#include "main.h"

/**
  * rev_string - reverse a string
  * @s: string param
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, j, count;
	char *str, tmp;

	count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = 1 + 1; j > 0; j--)
		{
			tmp = *(str + j);
			*(str + j) = *(str + (j -1));
			*(str + (j -1)) = tmp;
		}
	}
}
