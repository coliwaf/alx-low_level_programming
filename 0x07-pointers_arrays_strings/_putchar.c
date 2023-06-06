#include <unistd.h>

/**
 * _putchar - prints char to stdout
 * @c: the char to print
 * Return: 1 on success, -1 on error
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
