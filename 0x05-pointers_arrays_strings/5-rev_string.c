#include "main.h"

/**
  * rev_string - reverse a string
  * @s: string param
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, j, k;
	char *a, tmp;

	a = s;

	while (s[j] != 0)
	{
		j++;
	}

	for (k = 1; k < j; k++)
	{
		a++;
	}

	for (i = 0; i < (j / 2); i++)
	{
		tmp = s[i];
		s[i] =  *a;
		*a = tmp;
		a--;
	}
}
