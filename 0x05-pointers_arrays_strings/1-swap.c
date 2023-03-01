#include "main.h"

/**
  * swap_int - swaps the values of two integer args
  *
  * @a: pointer a
  * @b: pointer b
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
