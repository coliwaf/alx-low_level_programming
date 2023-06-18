#include "main.h"

int calc_prime (int numb, int d);
/**
 * is_prime_number - check if number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calc_prime(n, n - 1));
}

/**
 * calc_prime - checks if number is prime
 * @numb: number to check
 * @d: the divider param
 * Return: 1 if prime, 0 if not
 */

int calc_prime (int numb, int d)
{
	if (d == 1)
		return (1);
	if (d > 0 && numb % d == 0)
		return (0);
	return (calc_prime(numb, d - 1));
}
