#include "main.h"

/**
 * _strcmp: compares two strings
 * @s1: string one param
 * @s2: string two param
 * Return: negative difference if unmatched, 0 if matched
 * positive difference if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
