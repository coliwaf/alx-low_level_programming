#include "main.h"
#include <stdio.h>

/**
  * cap_string - capitalizes all words of a string
  * @s: string arg
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int a = 0, i;
	int spacecount = 13;
	char sep[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < spacecount)
		{
			if ((a == 0 || s[a - 1] == sep[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
