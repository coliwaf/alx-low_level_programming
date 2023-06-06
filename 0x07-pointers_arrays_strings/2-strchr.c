#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to fing
 *
 * Return: pointer to first occurence of @c in @s, or Null
 * if not found
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
