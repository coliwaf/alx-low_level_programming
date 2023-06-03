#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: param
 * Return: str len
 */

int _strlen(char *s)
{
	int len = 0;

	while(*s++)
		len++;
	return (len);
}
