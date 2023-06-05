#include "main.h"

/**
 * cap_string - capitalize all words
 * @s: string param
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int idx = 0;

	while (s[idx])
	{
		while (!(s[idx] >= 'a' && s[idx] <= 'z'))
		{
			idx++;
		}
		if(idx == 0 || s[idx - 1] == ' ' || s[idx - 1] == '\t' || s[idx - 1] == '\n' || s[idx - 1] == ',' || s[idx - 1] == ';' || s[idx - 1] == '.' || s[idx - 1] == '!' || s[idx - 1] == '?' || s[idx - 1] == '"' || s[idx - 1] == '(' || s[idx - 1] == ')' || s[idx - 1] == '{' || s[idx -1] == '}')
		{
			s[idx] -= 32;
		}
		idx++;
	}
	return (s);
}
