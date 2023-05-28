#include "main.h"

/**
 * _isalpha - checks if char is a letter
 * @c: the char ti interpret
 * Return: 1 if success, 0 if failed
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
	_putchar('\n');
}
