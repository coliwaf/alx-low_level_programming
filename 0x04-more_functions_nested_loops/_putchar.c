#include <unistd.h>

/**
  * _putchar - Entry point
  *
  * Return: Always 0
  */

int _putchar(char i)
{
	return (write(1, &i, 1));
}
